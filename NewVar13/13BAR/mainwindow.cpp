#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tablecompletion.h"
#include "help.h"
#include <QMessageBox>
#include <QObject>
#include <QLineEdit>
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFile>
#include <QDate>
#include <QDebug>
#include <QPixmap>
#include <QFileDialog>
#include <QTextStream>
#include <QLabel>
#include <QWidget>
#include <QStandardItemModel>
#include <QSqlRecord>
#include <QSettings>

void MainWindow::logDatabaseContents(const QSqlDatabase &db)
{
    QSqlQuery query(db);
    if (query.exec("SELECT * FROM Jornal;")) {
        qDebug() << "Contents of the Jornal table:";

        // Output the results of the query
        while (query.next()) {
            QString id = query.value(0).toString();
            QString description = query.value(1).toString();
            QString importance = query.value(2).toString();
            QString degree = query.value(3).toString();
            QString emotions = query.value(4).toString();
            QString date = query.value(5).toString();

            qDebug() << "Id:" << id << ", Description:" << description
                     << ", Importance:" << importance << ", Degree:" << degree
                     << ", Emotions:" << emotions << ", Date:" << date;
        }
    } else {
        qDebug() << "Error executing query:" << query.lastError().text();
    }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadSettings();
    QCoreApplication::setOrganizationName("YourOrganizationName");
    QCoreApplication::setApplicationName("YourAppName");
    QSettings settings("YourOrganizationName", "YourAppName");
        restoreGeometry(settings.value("geometry").toByteArray());

   // ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    this->setWindowTitle("Журнал событий");

    QPixmap pix("");

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./CLD.db");
    if (db.open()) {
        qDebug("open");
    } else {
        qDebug("no open");
    }

    query = new QSqlQuery(db);
    query->exec("PRAGMA foreign_keys = ON;");
    query->exec("CREATE TABLE Jornal( Id INTEGER PRIMARY KEY AUTOINCREMENT, Описание TEXT, Важность TEXT, Степень TEXT, Эмоции TEXT, Дата DATA);");

    model = new QSqlTableModel(this, db);
    model->setTable("Jornal");
    model->select();

    // Установите название для каждого столбца
    model->setHeaderData(0, Qt::Horizontal, "Номер события", Qt::DisplayRole);
    model->setHeaderData(1, Qt::Horizontal, "Описание события", Qt::DisplayRole);
    model->setHeaderData(2, Qt::Horizontal, "Важность события", Qt::DisplayRole);
    model->setHeaderData(3, Qt::Horizontal, "Степень удовлетворенности", Qt::DisplayRole);
    model->setHeaderData(4, Qt::Horizontal, "Эмоциональный фон", Qt::DisplayRole);
    model->setHeaderData(5, Qt::Horizontal, "Дата", Qt::DisplayRole);
    model->select();

    // Установка обработчика сортировки
    connect(ui->tableView->horizontalHeader(), &QHeaderView::sectionClicked, this, &MainWindow::onTableHeaderClicked);


    editForm = new tablecompletion();
    editForm->setParent(this, Qt::Window);
    editForm->setModel(model);



    connect(editForm, &tablecompletion::UT, this, &MainWindow::UpdateTable);
    editForm2 = new help();
    editForm2->setParent(this, Qt::Window);

    ui->tableView->setModel(model);

    logDatabaseContents(db);

    connect(ui->lineEditSearch, &QLineEdit::textChanged, this, &MainWindow::onSearchTextChanged);

    ui->tableView->setColumnWidth(0, 150);
    ui->tableView->setColumnWidth(1, 500);
    ui->tableView->setColumnWidth(2, 150);
    ui->tableView->setColumnWidth(3, 500);
    ui->tableView->setColumnWidth(4, 150);
    ui->tableView->setColumnWidth(5, 400);

}



void MainWindow::onSearchTextChanged(const QString &text)
{
    // Вызываем метод фильтрации при изменении текста в строке поиска
    filterTable(text);
}

void MainWindow::filterTable(const QString &filter)
{
    qDebug() << "Filtering table with: " << filter;
    // Фильтруем данные в модели по введенному тексту
    model->setFilter(QString("Дата LIKE '%%1%'").arg(filter));
    if (model->select()) {
        qDebug() << "Filtering successful. Row count: " << model->rowCount();
    } else {
        qDebug() << "Filtering failed. Error: " << model->lastError().text();
    }
}

void MainWindow::onTableHeaderClicked(int logicalIndex)
{
    if (logicalIndex >= 0)
    {
        // Определите направление сортировки (по возрастанию или убыванию)
        Qt::SortOrder sortOrder = ui->tableView->horizontalHeader()->sortIndicatorOrder();

        // Установите параметры сортировки в модели
        model->sort(logicalIndex, sortOrder);

        // Вызовите select() для применения сортировки к данным
        model->select();
    }
}



void MainWindow::on_pushButton_3_clicked() // кнопка выхода
{
    model->submitAll(); // Фиксируем изменения в базе данных
    close();
}

void MainWindow::on_pushButton_2_clicked() // кнопка удаления
{
    QMessageBox::StandardButton confirmation;
    confirmation = QMessageBox::question(this, "Подтверждение удаления", "Вы действительно хотите удалить запись?", QMessageBox::Yes | QMessageBox::No);
    if (confirmation == QMessageBox::Yes) {
        model->removeRow(row); // Удалить запись из модели (только из окна вывода)
    }
}



void MainWindow::on_pushButton_4_clicked() // кнопка "Обновить"
{
    model->submitAll(); // Фиксация изменений в базе данных
    model->select(); // Обновление отображения данны
}

void MainWindow::on_helpButton_clicked()
{
    helpinfo.show();
}

void MainWindow::on_pushButton_clicked()
{
    editForm->show();
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void MainWindow::on_commandLinkButton_clicked()
{
    editForm2->show();
}



MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_action_author_triggered()
{
    QMessageBox::about(this, "О программе", "Версия: 0.0.1 Alpha\n\nРазработчик: Попов Сергей ИП-115\n\n            © 2023-2024 уч.год, СибГУТИ");
}
void MainWindow::UpdateTable()
{
    model->select();
}

void MainWindow::on_action_2_triggered()
{
    QString filename = QFileDialog::getSaveFileName(nullptr, "Сохранить как", QDir::currentPath());
    if (!filename.isEmpty())
    {
        QFile file(filename);
        if (file.open(QIODevice::WriteOnly))
        {
            QTextStream stream(&file);

            // Сохраняем заголовки столбцов
            QStringList headerData;
            for (int i = 0; i < model->columnCount(); ++i)
            {
                headerData.append(model->headerData(i, Qt::Horizontal).toString());
            }
            stream << headerData.join("\t") << "\n";

            // Сохраняем данные
            for (int row = 0; row < model->rowCount(); ++row)
            {
                QStringList rowData;
                for (int col = 0; col < model->columnCount(); ++col)
                {
                    rowData.append(model->data(model->index(row, col)).toString());
                }
                stream << rowData.join("\t") << "\n";
            }

            file.close();
            QMessageBox::information(this, "Файл сохранён", "Файл успешно сохранён");
        }
    }
}

void MainWindow::on_action_3_triggered()
{
    QString filename = QFileDialog::getOpenFileName(nullptr, "Открыть", QDir::currentPath());
    if (!filename.isEmpty())
    {
        QFile file(filename);
        if (file.open(QIODevice::ReadOnly))
        {
            QTextStream stream(&file);

            QString fileContent = stream.readAll();
            QStringList lines = fileContent.split("\n");

            QStandardItemModel *fileModel = new QStandardItemModel(this);

            // Проверяем, есть ли заголовки столбцов в первой строке
            if (lines.first().contains("\t"))
            {
                QStringList header = lines.first().split("\t");
                lines.removeFirst(); // Пропускаем первую строку с названиями столбцов
                fileModel->setHorizontalHeaderLabels(header);
            }

            for (const QString& line : lines)
            {
                QStringList items = line.split("\t");
                QList<QStandardItem*> rowItems;
                for (const QString& item : items)
                {
                    rowItems.append(new QStandardItem(item));
                }
                fileModel->appendRow(rowItems);
            }

            ui->tableView->setModel(fileModel);

            file.close();
        }
    }
}



void MainWindow::on_reset_clicked()
{
    QMessageBox::StandardButton confirmation;
    confirmation = QMessageBox::question(this, "Подтверждение удаления таблицы", "Вы действительно хотите удалить таблицы?", QMessageBox::Yes | QMessageBox::No);
    if (confirmation == QMessageBox::Yes) {

        qDebug() << "Начало удаления таблицы";

        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("./CLD.db");
        if (db.open()) {
            qDebug("open");
            QSqlQuery query;
            query.exec("DELETE FROM Jornal");
            model->select();  // Обновляем модель после очистки данных
        } else {
            qDebug("no open");
        }

    }
}
void MainWindow::saveSettings()
{
    QSettings settings("YourOrganizationName", "YourAppName");
    settings.setValue("MainWindow/Size", size());
}

void MainWindow::loadSettings()
{
    QSettings settings("YourOrganizationName", "YourAppName");
    resize(settings.value("MainWindow/Size", QSize(800, 600)).toSize());
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    // Сохраняем настройки при закрытии окна
    saveSettings();
    QMainWindow::closeEvent(event);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->tableView->sortByColumn(1, Qt::AscendingOrder);
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->tableView->sortByColumn(5, Qt::AscendingOrder);
}

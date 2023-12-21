#include "tablecompletion.h"
#include "ui_tablecompletion.h"  // Важно: добавьте этот include

#include "mainwindow.h"
#include <QMessageBox>
#include <QObject>
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFile>
#include <QDate>
#include <QDebug>

tablecompletion::tablecompletion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tablecompletion)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./CLD.db");
    if(db.open())
    {
        qDebug("open");
    }
    else
    {
        qDebug("no open");
    }



    model = new QSqlTableModel(this, db);
    model->setTable("Jornal");
    model->select();



    //mapper = new QDataWidgetMapper(this);

}

tablecompletion::~tablecompletion()
{
    delete ui;
}

void tablecompletion::setModel(QAbstractItemModel* /*model*/)
{
    //mapper->setModel(model);
    //mapper->addMapping(ui->comboBox,1);
}

void tablecompletion::on_pushButton_clicked()
{
    QSqlQuery query;
    //QString snumber1;
    QString number1;
    QString number2;
    QString number3;
    QString number4;
    QString number5;

    //QString snumber2;
    number1 = ui->comboBox->currentText();
    number2 = ui->lineEdit_5->text();
    number4 = ui->comboBox_2->currentText();
    number5 = ui->dateEdit->text();
    number3 = ui->comboBox_3->currentText();


   // int number2 = ui->lineEdit_2->text().toInt();
   // snumber1 = QString::number(number1);;
    //snumber2 = QString::number(number2);;
    if(number2 == "")
    {QMessageBox::information(this, "ВНИМАНИЕ", "Заполните пустые элементы.", "ОК");}
    else if (number2.toInt()) {
        QMessageBox::information(this, "ВНИМАНИЕ", "Вы можете вводить только слова.", "ОК");
    }
else{
        //Id INTEGER PRIMARY KEY AUTOINCREMENT, Описание TEXT, Важность TEXT, Степень TEXT, Эмоции TEXT, Дата DATA
        qDebug() << "Cработало";
        query.prepare("INSERT INTO Jornal (Описание, Важность, Степень, Эмоции, Дата) VALUES (:FName, :Class, :Pred, :Mark, :Date)");

        query.bindValue(":Class", number1);
        query.bindValue(":FName", number2);
        query.bindValue(":Pred", number3);
        query.bindValue(":Mark", number4);
        query.bindValue(":Date", number5);



        if(!query.exec()){
            qDebug() << "error add";
        }
        emit UT();

        model->setTable("Jornal");
        model->select();
QMessageBox::information(this, "Сохранение", "Сохранено.", "Ок");
ui->lineEdit_5->clear();

close();
   }
}
void tablecompletion::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "ВНИМАНИЕ", "Вы хотите выйти с заполнения таблицы?",
                                  QMessageBox::Yes |QMessageBox::No);
    if (reply == QMessageBox::Yes) {

        ui->lineEdit_5->clear();


        this->close();

    }
  }

void tablecompletion::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Внимание", "Вы действительно хотите сбросить значения?",
                                  QMessageBox::Yes |QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        ui->lineEdit_5->clear();


    }
    QMessageBox::information(this, "Сброс", "Поля сброшены.", "ОК");


}



#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QDataWidgetMapper>
#include "tablecompletion.h"
#include "help.h"



namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void saveSettings();
        void loadSettings();

public slots:
    void UpdateTable();
    void onTableHeaderClicked(int logicalIndex);

private slots:
    void onSearchTextChanged(const QString &text);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

    void on_action_author_triggered();
    void on_pushButton_clicked();

    void on_reset_clicked();
    void on_tableView_clicked(const QModelIndex &index);

    void on_helpButton_clicked();

    void on_commandLinkButton_clicked();

    void on_action_2_triggered();
    void on_action_3_triggered();
    void logDatabaseContents(const QSqlDatabase &db);
    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel *model;
    tablecompletion* editForm;
    help* editForm2;
    tablecompletion *A;
    help helpinfo;
    int row;

    QDataWidgetMapper* mapper;

    void filterTable(const QString &filter);
protected:
    void closeEvent(QCloseEvent *event) override;
};

#endif // MAINWINDOW_H

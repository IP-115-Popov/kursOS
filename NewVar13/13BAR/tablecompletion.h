#ifndef TABLECOMPLETION_H//tablecompletion
#define TABLECOMPLETION_H

#include <QDialog>
#include <QTimer>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>


namespace Ui {
class tablecompletion;
}

class tablecompletion : public QDialog
{
    Q_OBJECT

public:
    explicit tablecompletion(QWidget *parent = 0);
    ~tablecompletion();
    //QDataWidgetMapper* mapper;
    QSqlDatabase db;
    QSqlQuery *query;

    QSqlTableModel    *model;
    QSqlTableModel    *model2;

void setModel(QAbstractItemModel* model);

private slots:
void on_pushButton_clicked();

void on_pushButton_3_clicked();

void on_pushButton_2_clicked();



private:
    Ui::tablecompletion *ui;

signals:
    void UT();
};

#endif // SECONDWIN_H

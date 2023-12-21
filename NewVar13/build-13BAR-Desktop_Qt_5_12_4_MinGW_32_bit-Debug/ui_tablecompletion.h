/********************************************************************************
** Form generated from reading UI file 'tablecompletion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLECOMPLETION_H
#define UI_TABLECOMPLETION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tablecompletion
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QDateEdit *dateEdit;
    QLabel *label_8;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *tablecompletion)
    {
        if (tablecompletion->objectName().isEmpty())
            tablecompletion->setObjectName(QString::fromUtf8("tablecompletion"));
        tablecompletion->resize(515, 245);
        tablecompletion->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(tablecompletion);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_9 = new QLabel(tablecompletion);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 0, 2, 1, 1);

        comboBox_3 = new QComboBox(tablecompletion);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 2, 1, 1, 1);

        dateEdit = new QDateEdit(tablecompletion);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setStyleSheet(QString::fromUtf8(""));
        dateEdit->setDateTime(QDateTime(QDate(2022, 12, 10), QTime(0, 0, 0)));
        dateEdit->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit, 2, 2, 1, 1);

        label_8 = new QLabel(tablecompletion);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        label_6 = new QLabel(tablecompletion);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8(""));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(tablecompletion);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_7 = new QLabel(tablecompletion);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_7);

        comboBox = new QComboBox(tablecompletion);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_2 = new QLabel(tablecompletion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_5 = new QLineEdit(tablecompletion);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setTabletTracking(false);
        lineEdit_5->setAcceptDrops(false);
        lineEdit_5->setLayoutDirection(Qt::RightToLeft);
        lineEdit_5->setClearButtonEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_5);


        gridLayout_2->addLayout(formLayout, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(tablecompletion);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(tablecompletion);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font1);

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(tablecompletion);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        horizontalLayout->addWidget(pushButton_2);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 1);


        retranslateUi(tablecompletion);

        QMetaObject::connectSlotsByName(tablecompletion);
    } // setupUi

    void retranslateUi(QWidget *tablecompletion)
    {
        tablecompletion->setWindowTitle(QApplication::translate("tablecompletion", "Form", nullptr));
        label_9->setText(QApplication::translate("tablecompletion", "\320\224\320\260\321\202\320\260", nullptr));
        comboBox_3->setItemText(0, QString());
        comboBox_3->setItemText(1, QApplication::translate("tablecompletion", "0 \320\235\320\265 \321\203\320\264\320\276\320\262\320\273\320\265\321\202\320\262\320\276\321\200\320\265\320\275", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("tablecompletion", "1 \320\247\320\260\321\201\321\202\320\270\321\207\320\275\320\276 \321\203\320\264\320\276\320\262\320\273\320\265\321\202\320\262\320\276\321\200\320\265\320\275", nullptr));
        comboBox_3->setItemText(3, QApplication::translate("tablecompletion", "2 \320\243\320\264\320\276\320\262\320\273\320\265\321\202\320\262\320\276\321\200\320\265\320\275", nullptr));
        comboBox_3->setItemText(4, QApplication::translate("tablecompletion", "3 \320\236\321\207\320\265\320\275\321\214 \321\203\320\264\320\276\320\262\320\273\320\265\321\202\320\262\320\276\321\200\320\265\320\275", nullptr));
        comboBox_3->setItemText(5, QApplication::translate("tablecompletion", "4 \320\221\320\276\320\273\320\265\320\265 \321\207\320\265\320\274 \321\203\320\264\320\276\320\262\320\273\320\265\321\202\320\262\320\276\321\200\320\265\320\275", nullptr));

        dateEdit->setDisplayFormat(QApplication::translate("tablecompletion", "yyyy.MM.dd", nullptr));
        label_8->setText(QApplication::translate("tablecompletion", "\320\241\321\202\320\265\320\277\320\265\320\275\321\214 \321\203\320\264\320\276\320\262\320\273\320\265\321\202\320\262\320\276\321\200\320\265\320\275\320\275\320\276\321\201\321\202\320\270", nullptr));
        label_6->setText(QApplication::translate("tablecompletion", "\320\255\320\274\320\276\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\321\213\320\271 \321\204\320\276\320\275", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("tablecompletion", "1", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("tablecompletion", "2", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("tablecompletion", "3", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("tablecompletion", "4", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("tablecompletion", "5", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("tablecompletion", "6", nullptr));
        comboBox_2->setItemText(6, QApplication::translate("tablecompletion", "7", nullptr));
        comboBox_2->setItemText(7, QApplication::translate("tablecompletion", "8", nullptr));
        comboBox_2->setItemText(8, QApplication::translate("tablecompletion", "9", nullptr));
        comboBox_2->setItemText(9, QApplication::translate("tablecompletion", "10", nullptr));

        label_7->setText(QApplication::translate("tablecompletion", "\320\222\320\260\320\266\320\275\320\276\321\201\321\202\321\214 \321\201\320\276\320\261\321\213\321\202\320\270\321\217", nullptr));
        comboBox->setItemText(0, QApplication::translate("tablecompletion", "1", nullptr));
        comboBox->setItemText(1, QApplication::translate("tablecompletion", "2", nullptr));
        comboBox->setItemText(2, QApplication::translate("tablecompletion", "3", nullptr));
        comboBox->setItemText(3, QApplication::translate("tablecompletion", "4", nullptr));
        comboBox->setItemText(4, QApplication::translate("tablecompletion", "5", nullptr));
        comboBox->setItemText(5, QApplication::translate("tablecompletion", "6", nullptr));
        comboBox->setItemText(6, QApplication::translate("tablecompletion", "7", nullptr));
        comboBox->setItemText(7, QApplication::translate("tablecompletion", "8", nullptr));
        comboBox->setItemText(8, QApplication::translate("tablecompletion", "9", nullptr));
        comboBox->setItemText(9, QApplication::translate("tablecompletion", "10", nullptr));

        label_2->setText(QApplication::translate("tablecompletion", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \321\201\320\276\320\261\321\213\321\202\320\270\321\217 ", nullptr));
        pushButton->setText(QApplication::translate("tablecompletion", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QApplication::translate("tablecompletion", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton_2->setText(QApplication::translate("tablecompletion", "\320\241\320\221\320\240\320\236\320\241\320\230\320\242\320\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tablecompletion: public Ui_tablecompletion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLECOMPLETION_H

/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_help
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *help_update;
    QPushButton *help_add;
    QPushButton *delete_help;
    QPushButton *exit_help;

    void setupUi(QWidget *help)
    {
        if (help->objectName().isEmpty())
            help->setObjectName(QString::fromUtf8("help"));
        help->resize(310, 333);
        help->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(help);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(help);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sitka Subheading"));
        font.setPointSize(17);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        help_update = new QPushButton(help);
        help_update->setObjectName(QString::fromUtf8("help_update"));
        help_update->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(help_update);

        help_add = new QPushButton(help);
        help_add->setObjectName(QString::fromUtf8("help_add"));
        help_add->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(help_add);

        delete_help = new QPushButton(help);
        delete_help->setObjectName(QString::fromUtf8("delete_help"));
        delete_help->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(delete_help);

        exit_help = new QPushButton(help);
        exit_help->setObjectName(QString::fromUtf8("exit_help"));
        exit_help->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(exit_help);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(help);

        QMetaObject::connectSlotsByName(help);
    } // setupUi

    void retranslateUi(QWidget *help)
    {
        help->setWindowTitle(QApplication::translate("help", "\320\237\320\276\320\274\320\276\321\211\321\214", nullptr));
        label->setText(QApplication::translate("help", "\320\237\320\276\320\274\320\276\321\211\321\214", nullptr));
        help_update->setText(QApplication::translate("help", "\320\235\320\260\321\207\320\260\320\273\320\276 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        help_add->setText(QApplication::translate("help", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        delete_help->setText(QApplication::translate("help", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        exit_help->setText(QApplication::translate("help", "\320\222\321\213\321\205\320\276\320\264 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class help: public Ui_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H

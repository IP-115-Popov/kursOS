/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QAction *action_author;
    QAction *action_3;
    QWidget *helpButton;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QLineEdit *lineEditSearch;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *reset;
    QCommandLinkButton *commandLinkButton;
    QPushButton *pushButton_3;
    QLabel *image123;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(914, 403);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_author = new QAction(MainWindow);
        action_author->setObjectName(QString::fromUtf8("action_author"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        helpButton = new QWidget(MainWindow);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setFocusPolicy(Qt::WheelFocus);
        gridLayout = new QGridLayout(helpButton);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(helpButton);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        lineEditSearch = new QLineEdit(helpButton);
        lineEditSearch->setObjectName(QString::fromUtf8("lineEditSearch"));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        lineEditSearch->setFont(font);
        lineEditSearch->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEditSearch, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(helpButton);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButton);

        pushButton_6 = new QPushButton(helpButton);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(helpButton);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(helpButton);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setStyleStrategy(QFont::PreferDefault);
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(helpButton);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButton_2);

        reset = new QPushButton(helpButton);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(reset);

        commandLinkButton = new QCommandLinkButton(helpButton);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI"));
        font3.setBold(false);
        font3.setWeight(50);
        commandLinkButton->setFont(font3);
        commandLinkButton->setLayoutDirection(Qt::LeftToRight);
        commandLinkButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Downloads/free-icon-question-2476199.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon);
        commandLinkButton->setIconSize(QSize(20, 10));

        horizontalLayout->addWidget(commandLinkButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(helpButton);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_3, 3, 0, 1, 1);

        image123 = new QLabel(helpButton);
        image123->setObjectName(QString::fromUtf8("image123"));
        image123->setStyleSheet(QString::fromUtf8(""));
        image123->setPixmap(QPixmap(QString::fromUtf8("BOOK.png")));

        gridLayout->addWidget(image123, 4, 0, 1, 1);

        MainWindow->setCentralWidget(helpButton);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 914, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu_2->addAction(action_author);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        action_author->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        action_3->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditSearch->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditSearch->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        lineEditSearch->setText(QString());
        lineEditSearch->setPlaceholderText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 \320\264\320\260\321\202\320\265", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\321\216", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        reset->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", nullptr));
#ifndef QT_NO_TOOLTIP
        commandLinkButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        commandLinkButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", nullptr));
        commandLinkButton->setDescription(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        image123->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QtWidgets>

void loadModules(QSplashScreen* psplash){
    QTime time;
    time.start();

    for (int i = 0; i < 100; ) {
        if (time.elapsed() > 10) {
            time.start();
            ++i;
        }

        psplash->showMessage("\n\nLoading modules: "
                             + QString::number(i) + "%",
                             Qt::AlignTop | Qt::AlignHCenter, // Установите выравнивание вверх и по центру
                             Qt::black
                             );
        qApp->processEvents();
    }
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile styleFile("./customStyle.css");
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    a.setStyleSheet(styleSheet);
    QSplashScreen splash(QPixmap("C:\\Users\\mixai\\OneDrive\\Desktop\\Jurnal22\\load.jpg"));
    splash.show();
    MainWindow w;
    w.setMinimumSize(1900, 1000);
    loadModules(&splash);
    splash.finish(&w);
    w.show();

    return a.exec();
}





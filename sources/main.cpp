#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include"lib/framlessHelper/qml/framelesswindowhelper.h"
#include"lib/framlessHelper/qwidget/framelesshelper.h"
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/qml/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}

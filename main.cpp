#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QWebChannel>
#include "MyBackend.h"
#include "AnotherBackend.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // Create instances of the C++ classes
    MyBackend myBackend;
    AnotherBackend anotherBackend;

    // Expose the objects to QML
    engine.rootContext()->setContextProperty("myBackend", &myBackend);
    engine.rootContext()->setContextProperty("anotherBackend", &anotherBackend);

    // Load the QML file
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QWebChannel>
#include "MyBackend.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // Create an instance of MyBackend
    MyBackend backend;

    // Expose the backend object to QML
    engine.rootContext()->setContextProperty("backend", &backend);

    // Load the QML file
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}

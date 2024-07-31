#include "MyBackend.h"
#include <QDebug>

MyBackend::MyBackend(QObject *parent) : QObject(parent) {}

void MyBackend::showAlert(const QString &message) {
    qDebug() << "Received message from JavaScript: " << message;
}

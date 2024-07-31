#include "AnotherBackend.h"
#include <QDebug>

AnotherBackend::AnotherBackend(QObject *parent) : QObject(parent) {}

void AnotherBackend::logMessage(const QString &message) {
    qDebug() << "AnotherBackend logged message: " << message;
}

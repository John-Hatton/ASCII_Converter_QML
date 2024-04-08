//
// Created by John on 4/8/2024.
//

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickStyle>
#include <QQmlContext>
#include <ASCIIConverter.hpp>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    // Set the application style to Fusion
    QQuickStyle::setStyle("Fusion");

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("asciiConverter", new ASCIIConverter);
    const QUrl url(u"qrc:/main.qml"_qs);
    QObject::connect(&engine,&QQmlApplicationEngine::objectCreationFailed,
                     &app,[]() { QCoreApplication::exit(-1); },Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
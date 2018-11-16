#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickStyle>
#include <QQmlContext>
#include <controller.h>

int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);
  Controller con;
  QQuickStyle::setStyle("Material");
  QQmlApplicationEngine engine;
  QQmlContext *context = engine.rootContext();
  context->setContextProperty("Controller", &con);
  engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
  if (engine.rootObjects().isEmpty())
    return -1;

  return app.exec();
}

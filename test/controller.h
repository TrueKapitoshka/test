#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <filesmodel.h>
#include <QUrl>

class Controller : public QObject
{
  Q_OBJECT
private:
  FilesModel *file;
  quint8 _value = 0;
public:
  explicit Controller(QObject *parent = nullptr);

signals:
  void sendToModel(int number);
public slots:
  void setFile(QUrl);
  void valueChange(quint8);
};

#endif // CONTROLLER_H

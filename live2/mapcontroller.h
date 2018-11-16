#ifndef MAPCONTROLLER_H
#define MAPCONTROLLER_H

#include <QObject>

class MapController : public QObject
{
  Q_OBJECT
public:
  explicit MapController(QObject *parent = nullptr);

signals:

public slots:
};

#endif // MAPCONTROLLER_H
#ifndef SLOT_H
#define SLOT_H

#include <QObject>

class slot : public QObject
{
  Q_OBJECT
public:
  explicit slot(QObject *parent = nullptr);

signals:

public slots:
};

#endif // SLOT_H
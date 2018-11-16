#ifndef SIGNAL_H
#define SIGNAL_H

#include <QObject>

class signal : public QObject
{
  Q_OBJECT
public:
  explicit signal(QObject *parent = nullptr);

signals:

public slots:
};

#endif // SIGNAL_H
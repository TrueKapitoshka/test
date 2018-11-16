#ifndef SLOT_H
#define SLOT_H


class Slot : public QObject
{
  Q_OBJECT
public:
  explicit Slot(QObject *parent = nullptr);

signals:

public slots:
};

#endif // SLOT_H
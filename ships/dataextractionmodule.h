#ifndef DATAEXTRACTIONMODULE_H
#define DATAEXTRACTIONMODULE_H

#include <QObject>

class DataExtractionModule : public QObject
{
  Q_OBJECT
public:
  explicit DataExtractionModule(QObject *parent = nullptr);

signals:

public slots:
};

#endif // DATAEXTRACTIONMODULE_H
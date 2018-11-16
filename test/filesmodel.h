#ifndef FILESMODEL_H
#define FILESMODEL_H

#include <QFile>

class FilesModel
{
private:
  QFile *_file;
public:
  FilesModel(QString);
  quint8 getValues();
  ~FilesModel();
};

#endif // FILESMODEL_H

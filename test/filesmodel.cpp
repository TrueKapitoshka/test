#include "filesmodel.h"

FilesModel::FilesModel(QString fileName)
{
    _file = new QFile(fileName);
    bool l = _file->open(QIODevice::ReadOnly | QIODevice::Text);

}

FilesModel::~FilesModel(){
    _file->close();
}

quint8 FilesModel::getValues(){
  quint8 i;
  QString line;
  while (!_file->atEnd()) {
         line = _file->readLine();
         i += line.toInt();
     }
  return i;
}

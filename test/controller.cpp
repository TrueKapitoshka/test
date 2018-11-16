#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent)
{

}

void Controller::valueChange(quint8 value){
  _value = value;
}

void Controller::setFile(QUrl str){
  file = new FilesModel(str.path());
  _value += file->getValues();
  emit sendToModel(_value);
}

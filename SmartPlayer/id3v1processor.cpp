#include "id3v1processor.h"

Id3v1Processor::Id3v1Processor(QFile* f):TagsProcessor(f)
{
  _f->open(QFile::ReadOnly);
  qint64 byteCount= _f->size();
  _f->seek(byteCount-256);
}

void Id3v1Processor::getHeaders(){

}

TagsProcessor* Id3v1Processor::getNext(){

}

void Id3v1Processor::getTags(){

}

bool Id3v1Processor::isMy(){
    QByteArray buff = _f->read(3);
}

qint64 Id3v1Processor::getLenght(QByteArray bufferByte){

}

void Id3v1Processor::parsMetoInfo(){
  getHeaders();
}

Id3v1Processor::~Id3v1Processor(){
}

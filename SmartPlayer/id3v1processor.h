#ifndef IDV2PROCESSOR_H
#define IDV2PROCESSOR_H

#include <tagsprocessor.h>

class Id3v1Processor : public TagsProcessor
{
private:
    void getHeaders();
    void getTags();
    qint64 getLenght(QByteArray);
public:
      void parsMetoInfo();
      TagsProcessor* getNext();
      bool isMy();
      Id3v1Processor(QFile*);
      ~Id3v1Processor();
};

#endif // IDV2PROCESSOR_H

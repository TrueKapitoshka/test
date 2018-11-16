#ifndef ID3HEADER_H
#define ID3HEADER_H
#include <QtGlobal>

struct Id3Header
{
  char marker[3];
  qint8 version;
  qint8 subVersion;
  char flags;
  qint64 lenght;
};

#endif // ID3HEADER_H

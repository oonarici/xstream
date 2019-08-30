#ifndef FILEREADER_H
#define FILEREADER_H

#include "abstractreader.h"

#include <fstream>

class FileReader : public AbstractReader
{
    std::ifstream *_file;

public:
    FileReader(std::ifstream *file);

    long pos() const;
    void seek(long pos);
    long length();

    virtual void read(void *data, int length) override final;
};

#endif // FILEREADER_H

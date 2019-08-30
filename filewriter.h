#ifndef FILEWRITER_H
#define FILEWRITER_H

#include "abstractwriter.h"

#include <fstream>

class FileWriter : public AbstractWriter
{
    std::ofstream *_file;
public:
    FileWriter(std::ofstream *file);

    long pos() const;
    void seek(long pos);
    long length();
    void flush();

protected:
    virtual void writeBase(const void *data, int length) override final;
};

#endif // FILEWRITER_H

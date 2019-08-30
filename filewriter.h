#ifndef FILEWRITER_H
#define FILEWRITER_H

#include "abstractwriter.h"

class FileWriter : public AbstractWriter
{
public:
    FileWriter(std::string filename);

    // AbstractWriter interface
public:
    virtual void write(const void *data, int length) override final
    {

    }
};

#endif // FILEWRITER_H

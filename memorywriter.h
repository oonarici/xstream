#ifndef MEMORYWRITER_H
#define MEMORYWRITER_H

#include <vector>

#include "abstractwriter.h"

class MemoryWriter : public AbstractWriter
{
    std::vector<char> _data;
    long _pos = 0;
    long _length = 0;

public:
    MemoryWriter();

    void seek(long pos);
    long pos() const;
    long length();
    void *data();

    void clear();

protected:
    virtual void writeBase(const void *data, int length) override;
};

#endif // MEMORYWRITER_H

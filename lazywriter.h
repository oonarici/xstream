#ifndef LAZYWRITER_H
#define LAZYWRITER_H

#include "memorywriter.h"

#include <vector>

class LazyWriter : public AbstractWriter
{
    MemoryWriter _memory_writer;
    AbstractWriter *_inner_writer;

public:
    LazyWriter(AbstractWriter *inner_writer);

    void seek(long pos);
    long pos() const;
    long length();

    void clear();

    virtual void flush() override;

protected:
    virtual void writeBase(const void *data, int length) override;
};

#endif // LAZYWRITER_H

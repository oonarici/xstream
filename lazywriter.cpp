#include "lazywriter.h"

LazyWriter::LazyWriter(AbstractWriter *inner_writer)
{
    this->_inner_writer = inner_writer;
}

void LazyWriter::seek(long pos)
{
    this->_memory_writer.seek(pos);
}

long LazyWriter::pos() const
{
    return this->_memory_writer.pos();
}

long LazyWriter::length()
{
    return this->_memory_writer.length();
}


void LazyWriter::clear()
{
    this->_memory_writer.clear();
}

void LazyWriter::flush()
{
    this->_inner_writer->write(this->_memory_writer.data(), this->_memory_writer.length());
    this->_inner_writer->flush();
}

void LazyWriter::writeBase(const void *data, int length)
{
    this->_memory_writer.write(data, length);
}

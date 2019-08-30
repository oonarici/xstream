#include "memorywriter.h"

MemoryWriter::MemoryWriter()
{
    this->_data.resize(16);
}

void MemoryWriter::seek(long pos)
{
    this->_pos = pos;
}

long MemoryWriter::pos() const
{
    return this->_pos;
}

long MemoryWriter::length()
{
    return this->_length;
}

void *MemoryWriter::data()
{
    return this->_data.data();
}

void MemoryWriter::clear()
{
    this->_length = 0;
    this->_pos = 0;
    this->_data.clear();
    this->_data.resize(16);
}

void MemoryWriter::writeBase(const void *data, int length)
{
    while((this->_data.size() + this->_pos) < length)
        this->_data.resize(2 * this->_data.size());
    long end_pos = this->_pos + length;
    const char *c_data = static_cast<const char *>(data);
    for(long i = this->_pos, j = 0; i < end_pos; ++i, ++j){
        this->_data[i] = c_data[j];
    }
    this->_pos = end_pos;
    if(end_pos > this->_length)
        this->_length = end_pos;
}

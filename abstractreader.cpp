#include "abstractreader.h"

void AbstractReader::read(short &v)
{
    void *ptr = &v;
    this->read(ptr, sizeof(short));
}

void AbstractReader::read(unsigned short &v)
{
    void *ptr = &v;
    this->read(ptr, sizeof(unsigned short));
}

void AbstractReader::read(unsigned int &v)
{
    void *ptr = &v;
    this->read(ptr, sizeof(unsigned int));
}

void AbstractReader::read(long double &v)
{
    void *ptr = &v;
    this->read(ptr, sizeof(long double));
}

void AbstractReader::read(std::string &v)
{
    unsigned int size;
    this->read(size);
    char data[size + 1];
    this->read(data, size);
    data[size] = '\0';
    v = data;
}

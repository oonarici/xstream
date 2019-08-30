#include "abstractreader.h"

void AbstractReader::read(bool &v)
{
    void *ptr = &v;
    this->readBase(ptr, sizeof(bool));
}

void AbstractReader::read(char &v)
{
    void *ptr = &v;
    this->readBase(ptr, sizeof(char));
}

void AbstractReader::read(unsigned char &v)
{
    void *ptr = &v;
    this->readBase(ptr, sizeof(unsigned char));
}

void AbstractReader::read(short &v)
{
    void *ptr = &v;
    this->readBase(ptr, sizeof(short));
}

void AbstractReader::read(unsigned short &v)
{
    void *ptr = &v;
    this->readBase(ptr, sizeof(unsigned short));
}

void AbstractReader::read(int &v)
{
    void *ptr = &v;
    this->readBase(ptr, sizeof(int));
}

void AbstractReader::read(unsigned int &v)
{
    void *ptr = &v;
    this->readBase(ptr, sizeof(unsigned int));
}

void AbstractReader::read(long &v)
{
    void *ptr = &v;
    this->readBase(ptr, sizeof(long));
}

void AbstractReader::read(unsigned long &v)
{
    void *ptr = &v;
    this->readBase(ptr, sizeof(unsigned long));
}

void AbstractReader::read(float &v)
{
    void *ptr = &v;
    this->readBase(ptr, sizeof(float));
}

void AbstractReader::read(double &v)
{
    void *ptr = &v;
    this->readBase(ptr, sizeof(double));
}

void AbstractReader::read(long double &v)
{
    void *ptr = &v;
    this->readBase(ptr, sizeof(long double));
}

void AbstractReader::read(std::string &v)
{
    unsigned int size;
    this->read(size);
    char data[size + 1];
    this->readBase(data, size);
    data[size] = '\0';
    v = data;
}

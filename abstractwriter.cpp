#include "abstractwriter.h"

void AbstractWriter::write(const bool &v)
{
    const void *ptr = &v;
    this->writeBase(ptr, sizeof(bool));
}

void AbstractWriter::write(const char &v)
{
    const void *ptr = &v;
    this->writeBase(ptr, sizeof(char));
}

void AbstractWriter::write(const unsigned char &v)
{
    const void *ptr = &v;
    this->writeBase(ptr, sizeof(unsigned char));
}

void AbstractWriter::write(const short &v)
{
    const void *ptr = &v;
    this->writeBase(ptr, sizeof(short));
}

void AbstractWriter::write(const unsigned short &v)
{
    const void *ptr = &v;
    this->writeBase(ptr, sizeof(unsigned short));
}

void AbstractWriter::write(const int &v)
{
    const void *ptr = &v;
    this->writeBase(ptr, sizeof(int));
}

void AbstractWriter::write(const unsigned int &v)
{
    const void *ptr = &v;
    this->writeBase(ptr, sizeof(unsigned int));
}

void AbstractWriter::write(const long &v)
{
    const void *ptr = &v;
    this->writeBase(ptr, sizeof(long));
}

void AbstractWriter::write(const unsigned long &v)
{
    const void *ptr = &v;
    this->writeBase(ptr, sizeof(unsigned long));
}

void AbstractWriter::write(const float &v)
{
    const void *ptr = &v;
    this->writeBase(ptr, sizeof(float));
}

void AbstractWriter::write(const double &v)
{
    const void *ptr = &v;
    this->writeBase(ptr, sizeof(double));
}

void AbstractWriter::write(const long double &v)
{
    const void *ptr = &v;
    this->writeBase(ptr, sizeof(long double));
}

void AbstractWriter::write(const std::string &v)
{
    this->write((unsigned int)v.size());
    this->writeBase(v.c_str(), v.size());
}

void AbstractWriter::write(const void *data, int length){
    this->writeBase(data, length);
}

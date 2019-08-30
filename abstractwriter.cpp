#include "abstractwriter.h"

void AbstractWriter::write(const bool &v)
{
    const void *ptr = &v;
    this->write(ptr, sizeof(bool));
}

void AbstractWriter::write(const char &v)
{
    const void *ptr = &v;
    this->write(ptr, sizeof(bool));
}

void AbstractWriter::write(const unsigned char &v)
{
    const void *ptr = &v;
    this->write(ptr, sizeof(unsigned char));
}

void AbstractWriter::write(const short &v)
{
    const void *ptr = &v;
    this->write(ptr, sizeof(short));
}

void AbstractWriter::write(const unsigned short &v)
{
    const void *ptr = &v;
    this->write(ptr, sizeof(unsigned short));
}

void AbstractWriter::write(const unsigned int &v)
{
    const void *ptr = &v;
    this->write(ptr, sizeof(unsigned int));
}

void AbstractWriter::write(const long &v)
{
    const void *ptr = &v;
    this->write(ptr, sizeof(long));
}

void AbstractWriter::write(const unsigned long &v)
{
    const void *ptr = &v;
    this->write(ptr, sizeof(unsigned long));
}

void AbstractWriter::write(const float &v)
{
    const void *ptr = &v;
    this->write(ptr, sizeof(float));
}

void AbstractWriter::write(const double &v)
{
    const void *ptr = &v;
    this->write(ptr, sizeof(double));
}

void AbstractWriter::write(const long double &v)
{
    const void *ptr = &v;
    this->write(ptr, sizeof(long double));
}

void AbstractWriter::write(const std::string &v)
{
    this->write((unsigned int)v.size());
    this->write(v.c_str(), v.size());
}

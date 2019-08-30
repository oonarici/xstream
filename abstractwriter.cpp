#include "abstractwriter.h"

void AbstractWriter::write(const bool &v)
{
    const void *ptr = &v;
    this->write(ptr, sizeof(bool));
}

void AbstractWriter::write(const unsigned int &v)
{
    const void *ptr = &v;
    this->write(ptr, sizeof(unsigned int));
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

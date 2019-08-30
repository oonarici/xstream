#ifndef ABSTRACTWRITER_H
#define ABSTRACTWRITER_H

#include <string>

class AbstractWriter
{
public:
    AbstractWriter() {}

    void write(const bool &v); //Dolduruldu
    void write(const char &v); //Dolduruldu
    void write(const unsigned char &v);
    void write(const short &v);
    void write(const unsigned short &v);
    void write(const int &v);
    void write(const unsigned int &v); //Dolduruldu
    void write(const long &v);
    void write(const unsigned long &v);
    void write(const float &v);
    void write(const double &v);
    void write(const long double &v); //Dolduruldu
    void write(const std::string &v); //Dolduruldu

    virtual void write(const void *data, int length) = 0;
};

#endif // ABSTRACTWRITER_H

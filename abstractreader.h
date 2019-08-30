#ifndef ABSTRACTREADER_H
#define ABSTRACTREADER_H

#include <string>

class AbstractReader
{
public:
    AbstractReader() {}

    void read(bool &v);
    void read(char &v);
    void read(unsigned char &v);
    void read(short &v);
    void read(unsigned short &v);
    void read(int &v);
    void read(unsigned int &v); //Dolduruldu
    void read(long &v);
    void read(unsigned long &v);
    void read(float &v);
    void read(double &v);
    void read(long double &v); //Dolduruldu
    void read(std::string &v); //Dolduruldu

    virtual void read(void *data, int length) = 0;
};

#endif // ABSTRACTREADER_H

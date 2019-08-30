#include "filereader.h"

FileReader::FileReader(std::ifstream *file)
{
    this->_file = file;
}

long FileReader::pos() const
{
    return this->_file->tellg();
}

void FileReader::seek(long pos)
{
    this->_file->seekg(pos);
}

long FileReader::length()
{
    long pos = this->_file->tellg();
    this->_file->seekg(0, std::ios_base::seekdir::_S_end);
    long len = this->_file->tellg();
    this->_file->seekg(pos, std::ios_base::seekdir::_S_beg);
    return len;
}

void FileReader::read(void *data, int length)
{
    this->_file->read((char*)data, length);
}

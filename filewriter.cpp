#include "filewriter.h"

FileWriter::FileWriter(std::ofstream *file)
{
    this->_file = file;
}

long FileWriter::pos() const
{
    return this->_file->tellp();
}

void FileWriter::seek(long pos)
{
    this->_file->seekp(pos);
}

long FileWriter::length()
{
    long pos = this->_file->tellp();
    this->_file->seekp(0, std::ios_base::seekdir::_S_end);
    long len = this->_file->tellp();
    this->_file->seekp(pos, std::ios_base::seekdir::_S_beg);
    return len;
}

void FileWriter::flush()
{
    this->_file->flush();
}

void FileWriter::writeBase(const void *data, int length)
{
    this->_file->write((const char*)data, length);
}

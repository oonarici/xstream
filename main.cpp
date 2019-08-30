#include <iostream>

#include "filereader.h"
#include "filewriter.h"
#include "abstractreader.h"

using namespace std;

int main()
{
    //    ifstream file;
    //    ifstream *pFile = &file;

    //    file.open("/home/oonarici/Desktop/background-data.txt", std::ios::out | std::ios::in | std::ios::app);
    //    FileReader someReader(pFile);

    //    long length = someReader.length();
    //    std::cout << "length: " << length << "\n"
    //              << "Cursor Position: " << someReader.pos() << "\n";
    //    someReader.seek(100);
    //    std::cout << "Cursor Position: " << someReader.pos() << "\n";

    ofstream wfile;
    ofstream *pwFile = &wfile;

    wfile.open("asd.txt", std::ios::out | std::ios::in | std::ios::app);

    FileWriter someWriter(pwFile);
    std::cout << someWriter.length() << "\n"
              << someWriter.pos() << "\n";
    someWriter.seek(3);

    std::cout << someWriter.pos() << "\n";

    int data = 5;
    someWriter.write(data);
}

#include <iostream>

#include "filereader.h"
#include "filewriter.h"
#include "abstractreader.h"

#include "memorywriter.h"
#include "lazywriter.h"


using namespace std;

int main()
{
    ofstream wfile;
    ofstream *pwFile = &wfile;

    wfile.open("asd.txt", std::ios::out | std::ios::in | std::ios::app);

    FileWriter someWriter(pwFile);

    MemoryWriter mwriter;
    mwriter.write(15);
    mwriter.write(3.1415);
    void *data = mwriter.data();
    someWriter.write(data, mwriter.length()); //FileWriter.write() çağrıldığı an dosyaya yazar.
    std::cout << someWriter.pos() << "\n"; //12

    LazyWriter lwriter(&someWriter);
    lwriter.write(15342L);
    lwriter.write(3.42532f);
    lwriter.write(23u);
    std::cout << someWriter.pos() << "\n"; //Henüz dosyaya yazmadı, FileWriter.write()'ta olduğu gibi olmaz. LazyWriter.write(), dosyaya yazmak için bekletir. O yüzden burası da 12 yazacak.
    lwriter.flush(); //İşte şimdi her şeyi dosyaya yazdı, artık imleç 28'de.
    std::cout << someWriter.pos() << "\n";

}

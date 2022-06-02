#include "Header.h"
#include <string.h>
void readALL(fstream& p)
{
    setlocale(LC_ALL, "Russian");
    p.clear();
    p.seekg(0, ios::beg);
    INFO zap; 
    cout << shapka;
    while (read(p, zap))
        print(zap);
    cout << endl << FinishL;
}


#include "Header.h"
#include <string.h>
void readN(fstream& p, int n)
{
    setlocale(LC_ALL, "Russian");
    p.clear();
    p.seekg(0, ios::beg);
    INFO zap; 
    if (read(p, zap, n))
    {
        cout << shapka;
        print(zap);
        cout << endl << FinishL;
    }
    else
    {
        cout << endl << "Такой записи нет" << endl;
    }
}


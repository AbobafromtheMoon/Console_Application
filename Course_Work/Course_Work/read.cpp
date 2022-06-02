#include "Header.h"
#include <string.h>
fstream& read(fstream& p, INFO& zap, int num)
{
    setlocale(LC_ALL, "Russian");
    p.clear(); 
    if (num)
    {
        p.seekg((num - 1) * len, ios::beg);
    }
    p.read((char*)&zap, len);
    return p;
}


#include "Header.h"
#include <string.h>
void writeNzap(fstream& p, int n)
{
    p.clear();
    p.seekg(0, ios::end); 
    for (int i = 0; i < n; i++)
    {
        INFO zap;
        zap = vvod();
        write(p, zap);
    }
}


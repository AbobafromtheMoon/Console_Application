#include "Header.h"
#include <string.h>
void write(fstream& p, INFO zap, int num)
{
    p.clear();
    if (num) p.seekg((num - 1) * len, ios::beg);
    p.write((char*)&zap, len);
}


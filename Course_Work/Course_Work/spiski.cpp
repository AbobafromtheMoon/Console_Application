#include "Header.h"
#include <string.h>
void spiski(fstream& p)
{
    setlocale(LC_ALL, "Russian");
    INFO zap;
    int f, k = 1;
    char gr[5][15];
    p.clear();
    p.seekg(0, ios::beg);
    cout << shapka3;
    for (int i = 1; read(p, zap, i); i++)
    {
        f = 0;
        if (i == 1) strcpy(gr[i - 1], zap.postavshik);
        else {
            p.seekg(0, ios::beg);
            for (int j = 0; j < k; j++)
                if (strcmp(gr[j], zap.postavshik) == 0) f = 1;
            if (f == 0) {
                strcpy(gr[k], zap.postavshik); k++;
            }
        }
    }
    for (int j = 0; j < k; j++)
    {
        p.seekg(0, ios::beg);
        for (int i = 1; read(p, zap, i); i++)
        {
            if (strcmp(gr[j], zap.postavshik) == 0)
                print2(zap);
        }
    }
    cout << endl << FinishL3 << endl;
}


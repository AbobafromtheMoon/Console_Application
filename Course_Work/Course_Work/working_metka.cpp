#include "Header.h"
#include <string.h>

void UNmetkaDel(fstream& p)
{
    p.clear();
    INFO zap;
    p.seekp(0, ios::beg);
    for (int i = 1; read(p, zap, i); i++)
    {
        if (strcmp(zap.metka, "-") == 0)
        {
            strcpy(zap.metka, "+");
            write(p, zap, i);
        }
    }
    system("pause");
}
int metkaDel(fstream& p, char* name)
{
    p.clear();
    INFO zap;
    p.seekp(0, ios::beg);
    int kol = 0;
    for (int i = 1; read(p, zap, i); i++)
    {
        if (strcmp(zap.postavshik, name) == 0)
        {
            strcpy(zap.metka, "-");
            write(p, zap, i);
            kol++;
        }
    }
    return kol;
}
int Delete(fstream& p)
{
    fstream p1("temp.txt", ios::app);
    p.clear();
    INFO zap;
    p.seekp(0, ios::beg);
    int kol = 0;
    for (int i = 1; read(p, zap, i); i++)
    {
        if (strcmp(zap.metka, "+") == 0)
        {
            write(p1, zap);
            kol++;
        }
    }
    p.close();
    p1.close();
    remove(fname);
    rename("temp.txt", fname);
    p.open(fname, ios::in | ios::out | ios::ate);
    return kol;
}


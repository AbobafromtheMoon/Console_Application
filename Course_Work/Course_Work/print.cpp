#include "Header.h"
#include <string.h>

void print(INFO zap)
{
    setlocale(LC_ALL, "Russian");
    cout << endl << zap.postavshik << setw(20);
    cout << zap.complect;
    cout << setw(20);
    cout << zap.kol_part;
    cout << setw(20);
    cout << zap.price;
    cout << setw(35) << zap.date << ' ' << setw(10) << zap.metka;
}


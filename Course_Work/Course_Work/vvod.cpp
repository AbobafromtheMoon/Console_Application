#include "Header.h"
#include <string.h>
INFO vvod()
{
    INFO zap;
    setlocale(LC_ALL, "Russian");
    cout << endl << "Введите название поставщика" << endl;
    cin >> zap.postavshik;
    cout << "Введите название комплектующего изделия (deka, corpus, klaviatura, pedal, struna) " << endl;
    cin >> zap.complect;
    cout << "Введите количество партий" << endl;
    cin >> zap.kol_part;
    cout << "Введите стоимость комплектующего изделия" << endl;
    cin >> zap.price;
    cout << "Введите дату поступления партии" << endl;
    cin >> zap.date;
    strcpy(zap.metka, "+");
    return zap;
}



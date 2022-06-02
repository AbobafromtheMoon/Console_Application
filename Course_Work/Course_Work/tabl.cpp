#include "Header.h"
#include <string.h>
ostream& shapka(ostream& stream)
{
    setlocale(LC_ALL, "Russian");
    stream << endl << FinishL << endl
        << "Поставщик"
        << setw(25) << "Комплектующие изделия"
        << setw(20) << "Стоимость единицы изделия"
        << setw(30) << "Дата поставки"
        << setw(20) << "Метка"
        << setw(10) << endl;
    stream << endl << FinishL;
    return stream;
}
ostream& FinishL(ostream& stream)
{
    stream << setfill('-') << setw(120) << '|' << setfill(' ');
    return stream;
}
ostream& FinishL2(ostream& stream)
{
    stream << setfill('-') << setw(120) << '|' << setfill(' ');
    return stream;
}
ostream& FinishL3(ostream& stream)
{
    stream << setfill('-') << setw(20) << '|' << setfill(' ');
    return stream;
}
ostream& shapka2(ostream& stream)
{
    setlocale(LC_ALL, "Russian");
    stream << endl << FinishL2 << endl
        << setw(20) << "Кол-во концертных роялей"
        << setw(20) << "Стоимость остатков"
        << setw(20) << "Кол-во малых роялей"
        << setw(20) << "Стоимость остатков";
    stream << endl << FinishL2;
    return stream;
}
ostream& shapka3(ostream& stream)
{
    setlocale(LC_ALL, "Russian");
    stream << endl << FinishL3 << endl
        << "Поставщик"
        << setw(10) << "Метка" << endl;
    stream << endl << FinishL3;
    return stream;
}


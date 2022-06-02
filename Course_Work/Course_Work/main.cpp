#include "Header.h"
#include <iostream>
#include <string.h>
using namespace std;
char fname[20] = "file1.bin";
int len = sizeof(INFO);
void writeNzap(fstream& p, int n);
void readALL(fstream& p);
void readN(fstream& p, int N);
void spiski(fstream& p);
char menu()
{
    setlocale(LC_ALL, "Russian");
    cout << endl << "\n\t1-> Добавить запись"
        << endl << "\t2-> Чтение всех записей"
        << endl << "\t3-> Чтение записи с N номером"
        << endl << "\t4-> Пометить на удаление"
        << endl << "\t5-> Снять пометку на удаление"
        << endl << "\t6-> Удалить выбранную запись"
        << endl << "\t7-> Списки фирм и метка"
        << endl << "\t8-> Кол-во концертных и малых роялей и стоимость остатков"
        << endl << "\t0-> Выйти" << endl;
    char s;
    cin >> s;
    return s;
}
int main()
{
    fstream p(fname, ios::app);
    int g, n;
    setlocale(LC_ALL, "Russian");
    if (p)
    {
        p.close();
        p.open(fname, ios::in | ios::out | ios::ate | ios::binary);
    }
    do
    {
        char s = menu();
        switch (s)
        {
        case '1':
            cout << "Введите кол-во записей: ";
            cin >> n;
            writeNzap(p, n);
            break;
        case '2':
            readALL(p);
            system("pause");
            break;
        case '3':
            int nom;
            cout << "\nВведите номер записи: ";
            cin >> nom;
            readN(p, nom);
            system("pause");
            break;
        case '4':
            int a;
            char name[10];
            cout << "\n\tВведите поставщика: ";
            cin >> name;
            a = metkaDel(p, name);
            break;
        case '5':
            UNmetkaDel(p);
            system("cls");
            break;
        case '6':
            Delete(p);
            cout << ("\n\tDone!");
            break;
        case '7':
            spiski(p);
            break;
        case '8':
            piano(p);
            break;
        case '0':
            p.close();
            exit(0);
        }
        cout << endl << "Повторить? 1/0" << endl;
        cin >> g;
    } while (g != 0);
    p.close();
    system("pause");
}


#include "Header.h"
#include <string.h>
void piano(fstream& p)
{
    INFO zap;
    setlocale(LC_ALL, "Russia");
    int kol_small = 0, kol_concert = 0, s_small = 0, s_concert = 0;
    int count_str = 0, count_deka = 0, count_corp = 0, count_klava = 0, count_pedal = 0;
    int c_postavshik = 0, c_postavshik1 = 0, c_postavshik2 = 0, c_postavshik3 = 0, c_postavshik4 = 0;
    int k_str = 0, k_deka = 0, k_pedal = 0;
    int h_str = 0, h_deka = 0, h_pedal = 0;
    int s_str = 0, s_deka = 0, s_corp = 0, s_klava = 0, s_pedal = 0; 
    p.seekp(0, ios::beg);
    cout << shapka2;
    for (int i = 1; read(p, zap, i); i++)
    {
        if (strcmp(zap.complect, "struna") == 0)
        {
            count_str += zap.kol_part;
            s_str += zap.price;
            c_postavshik += 1;
            if (c_postavshik > 1)
            {
                s_str = s_str / c_postavshik;
            }
        }
        if (strcmp(zap.complect, "deka") == 0)
        {
            count_deka += zap.kol_part;
            s_deka += zap.price;
            c_postavshik1 += 1;
            if (c_postavshik1 > 1)
            {
                s_deka = s_deka / c_postavshik1;
            }
        }
        if (strcmp(zap.complect, "corpus") == 0)
        {
            count_corp += zap.kol_part;
            s_corp += zap.price;
            c_postavshik2 += 1;
            if (c_postavshik2 > 1)
            {
                s_corp = s_corp / c_postavshik2;
            }
        }
        if (strcmp(zap.complect, "klaviatura") == 0)
        {
            count_klava += zap.kol_part;
            s_klava += zap.price;
            c_postavshik3 += 1;
            if (c_postavshik3 > 1)
            {
                s_klava = s_klava / c_postavshik3;
            }
        }
        if (strcmp(zap.complect, "pedal") == 0)
        {
            count_pedal += zap.kol_part;
            s_pedal += zap.price;
            c_postavshik4 += 1;
            if (c_postavshik4 > 1)
            {
                s_pedal = s_pedal / c_postavshik4;
            }
        }
    }
    k_str = count_str / 150;
    k_pedal = count_pedal / 3;
    k_deka = count_deka / 2;

    kol_concert = min(min(min(min(k_str, k_pedal), k_deka), count_klava), count_corp);

    h_str = count_str / 100;
    h_pedal = count_pedal / 2;
    h_deka = count_deka / 4;

    kol_small = min(min(min(min(h_str, h_pedal), h_deka), count_klava), count_corp);

    s_concert = (count_str - kol_concert * 150) * s_str + (count_pedal - kol_concert * 3) * s_pedal + (count_deka - kol_concert * 2) * s_deka + (count_klava - kol_concert) * s_klava + (count_corp - kol_concert) * s_corp;
    s_small = (count_str - kol_small * 100) * s_str + (count_pedal - kol_small * 2) * s_pedal + (count_deka - kol_small * 4) * s_deka + (count_klava - kol_small) * s_klava + (count_corp - kol_small) * s_corp;

    cout << setw(15) << kol_concert << setw(20) << s_concert << setw(20) << kol_small << setw(20) << s_small << endl;
    cout << FinishL2;
}


#ifndef Header_h
#define Header_h
#endif /* Header_h */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;
extern int len;
extern char fname[20]; // ÔÂÂÏÂÌÌ‡ˇ ÔÓ‰ Ì‡¯ Ù‡ÈÎ
struct INFO
{
    char postavshik[30];
    char complect[20];
    int kol_part;
    int price;
    char date[20];
    char metka[2];
};

ostream& FinishL(ostream& stream);
ostream& FinishL2(ostream& stream);
ostream& FinishL3(ostream& stream);
ostream& shapka(ostream& stream);
ostream& shapka2(ostream& stream);
ostream& shapka3(ostream& stream);

void write(fstream& p, INFO zap, int num = 0);
void print(INFO zap);
void print2(INFO zap);
INFO vvod();
void writeNzap(fstream& p, int n);
fstream& read(fstream& p, INFO& zap, int num = 0);
void readALL(fstream& p);
void readN(fstream& p, int N);
void spiski(fstream& p);
void piano(fstream& p);
int metkaDel(fstream& p, char* shifr);
void UNmetkaDel(fstream& p);
int Delete(fstream& p);
float min(float a, float b);

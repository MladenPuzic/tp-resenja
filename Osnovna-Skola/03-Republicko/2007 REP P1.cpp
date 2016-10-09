/*
Zadatak: P1 republičko 2007. OŠ
Autor rešenja: Mladen 'theSitzr' Puzić
*/
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char ime[18], prezime[18];
    int v, t, g, poeni, rez = 0; // 1 - Sudija, 2 - Zagonetac, 3 - Odgonetac
    scanf("%s%s%d%d%d", ime, prezime, &v, &t, &g);
    poeni = (v <= 70 ? 5:10) + (t <= 80 ? 7:12) + (g < 90 ? 4:18);
    if (strcmp("Torbic", prezime) != 0 && strcmp("Dugonogi", prezime) != 0 && strcmp("Podbrdni", prezime) != 0) {
        if (poeni >= 35) rez = 1;
        else if (poeni>=24) rez = 2;
        else rez = 3;
    } else if (strcmp("Torbic", prezime) == 0){
        if (poeni>=24) rez = 2;
        else rez = 3;
    } else if (strcmp("Podbrdni", prezime) == 0){
        if (poeni>=35) rez = 1;
        else rez = 2;
    } else if (strcmp("Dugonogi", prezime) == 0){
        if (poeni>=24) rez = 1;
        else rez = 3;
    }
    if(rez == 1) printf("%s %s je Sudija", ime, prezime);
    if(rez == 2) printf("%s %s je Zagonetac", ime, prezime);
    if(rez == 3) printf("%s %s je Odgonetac", ime, prezime);
    return 0;
}

/*
Zadatak: Davis Zona (B1 okružno 2016)
Autor rešenja: Mladen 'theSitzr' Puzić
*/
#include <bits/stdc++.h>

using namespace std;

int r, c, dim_r, dim_c, poc_r, poc_c, d_r, d_c, delta_r, delta_c, k, cnt;
int tr_r, tr_c;
int unutar() {
    return (tr_r >= poc_r && tr_c >= poc_c && tr_r < poc_r+dim_r && tr_c < poc_c+dim_c);
}
void pomeri() {
    int rez = 0;
    tr_r += delta_r; tr_c += delta_c;
    if(tr_r == 0) {
        tr_r = 2; rez = 1; delta_r = 1;
    }
    if(tr_r == r+1) {
        tr_r = r-1; rez = 1; delta_r = -1;
    }
    if(tr_c == 0) {
        tr_c = 2; rez = 1; delta_c = 1;
    }
    if(tr_c == c+1) {
        tr_c = c-1; rez = 1; delta_c = -1;
    }
    cnt += rez;
}

int main() {
    scanf("%d%d%d%d%d%d%d%d%d%d%d", &r, &c, &dim_r, &dim_c, &poc_r, &poc_c, &d_r, &d_c, &delta_r, &delta_c, &k);
    tr_r = d_r, tr_c = d_c;
    if(delta_r == 0 && delta_c == 0 && !unutar()) { printf("NE"); return 0; }
    while(cnt <= k) {
        if(unutar()) {
            printf("%d %d", tr_r, tr_c); return 0;
        }
        pomeri();
    }
    printf("NE");
    return 0;
}

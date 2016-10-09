/*
Zadatak: Abakus (B3 okružno 2016)
Autor rešenja: Mladen 'theSitzr' Puzić
*/
#include <bits/stdc++.h>
#define MAXN 1000005
#define MAXM 1005
#define pb push_back
using namespace std;

struct t{
    int grupa, poc, kraj;
};
t niz[MAXN];
vector <t> a[MAXM];

int krug(int a, int b) {
    int max1 = max(a,b), min1 = min(a,b);
    return min(max1-min1,min1-max1+10);
}

int main() {
    int n, c, m = 0; scanf("%d%d", &n, &c);
    for(int i = 0; i < n; i++) {
        scanf("%d", &niz[i].grupa);
        if(niz[i].grupa > m) m = niz[i].grupa;
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &niz[i].poc);
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &niz[i].kraj);
    }
    for(int i = 0; i < n; i++) {
        a[niz[i].grupa].pb(niz[i]);
    } int rez = 0;
    for(int i = 0; i <= m; i++) {
        int tmp = 0, len = a[i].size();
        for(int j = 0; j < len; j++) {
            tmp += krug(a[i][j].poc, a[i][j].kraj);
        } int rez1 = tmp;
        for(int k = 0; k < 10; k++) {
            tmp = 0;
            for(int j = 0; j < len; j++) {
                tmp += krug(k, a[i][j].kraj);
            } tmp += c;
            if(tmp < rez1) rez1 = tmp;
        }
        rez += rez1;
    }
    printf("%d", rez);
    return 0;
}

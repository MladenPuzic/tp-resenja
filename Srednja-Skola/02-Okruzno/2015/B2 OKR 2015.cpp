/*
Zadatak: Šifra (B2 okružno 2015)
Autor rešenja: Mladen 'theSitzr' Puzić
*/
#include <bits/stdc++.h>
#define MAXM 100010
using namespace std;
const unsigned long long MOD = 1e18+1;
unsigned long long step[MAXM];
vector <int> rez;
int n, m;
long long k;
void init() {
    long long l = log((long long)1e18)/log(n);
    step[0] = 1;
    for(int i = 1; i <= l; i++) {
        step[i] = (step[i-1]*n);
    }
}
int a[MAXM];
int main() {
    scanf("%d%d%lld", &n, &m, &k);
    init();
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = m-1; i >= 0; i--) {
        long long l = log((long long)1e18)/log(n);
        if(i > l) rez.push_back(a[0]);
        else {
            if((k-1)/step[i] < n) rez.push_back(a[(k-1)/step[i]]);
            else rez.push_back(a[n-1]);
            k%=step[i];
        }
    }
    for(int i = 0; i < m; i++) printf("%d ", rez[i]);
    return 0;
}

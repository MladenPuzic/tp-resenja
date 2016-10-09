/*
Zadatak: (Novi) Vavilon (B2 okružno 2016)
Autor rešenja: Mladen 'theSitzr' Puzić
*/
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main() {
    long long n, m, id; scanf("%lld%lld%lld", &n, &m, &id);
    long long rhs = m/id - 1;
    long long lhs = 1;
    long long kor = sqrt(id);
    long long rez = 1;
    for(int i = 2; i <= kor; i++)
        if(id%i == 0) lhs+=2;
    if(sqrt(id) == kor) lhs--;
    for(int i = 1; i < n; i++) {
        rez = (lhs*rez)%MOD; lhs--;
        rez = (rhs*rez)%MOD; rhs--;
    }
    rez*=2;
    rez%=MOD;
    printf("%lld", rez);
    return 0;
}

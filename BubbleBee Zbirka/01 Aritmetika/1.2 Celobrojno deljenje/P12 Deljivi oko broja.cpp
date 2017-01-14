//Problem: 1.2 - Deljivi oko broja
//Autor rešenja: Mladen Puzić
//Da bismo dobili l, potrebno je samo da oduzmemo ostatak pri deljenju sa k
//Ako je n deljivo sa k, onda je d = n, u suprotnom d = l+k
#include <cstdio>

using namespace std;

int main(){
    int n, k, l, d;
    scanf("%d%d", &n, &k);
    l = n-n%k;
    if(n%k == 0) d = n;
    else d = l+k;
    printf("%d\n%d", l, d);
    return 0;
}

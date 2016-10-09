/*
Zadatak: Front (B1 okružno 2015)
Autor rešenja: Mladen 'theSitzr' Puzić
*/
#include <bits/stdc++.h>
#define MAXN 1000005
using namespace std;
struct t{
    int x,y;
}; t tacka[MAXN];
bool cmp(t a, t b) {
    if(a.x < b.x) return true;
    if(a.x > b.x) return false;
    if(a.y < b.y) return true;
    return false;
}
int d[MAXN];
int main() {
	int n, tmp; scanf("%d", &n);
	for (int i = 0; i < n; i++) {
	    scanf("%d%d", &tacka[i].x, &tacka[i].y);
	} int max = -1;
	sort(tacka, tacka+n, cmp);
	for (int i = n-1; i >= 0; i--) {
	    d[i] = max;
	    if(tacka[i].y > max) max = tacka[i].y;
	} int rez = 0;
	for (int i = 0; i < n; i++) {
	    if(tacka[i].y > d[i]) rez++;
	} printf("%d", rez);
	return 0;
}

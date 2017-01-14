//Problem: 2.1 - Dva broja istog znaka
//Autor rešenja: Mladen Puzić
//Ako su dva broja suprotnih znakova onda je njihov proizvod negativan
#include <cstdio>
using namespace std;

int main(){
	int a,b;
	scanf("%d%d", &a, &b);
    if(a*b > 0) printf("da");
	else printf("ne");
	return 0;
}

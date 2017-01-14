//Problem: 1.2 - Sredina intervala
//Autor rešenja: Mladen Puzić
//Bitno je koristiti a+(b-a)/2 umesto (a+b)/2 jer u drugom rešenje može biti iznad
//dozvoljenog za tip int. Naravno, da bi izbegli ovaj problem možemo koristiti i long long int
#include <cstdio>

using namespace std;

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int res = a + (b-a)/2;
	printf("%d", res);
	return 0;
}

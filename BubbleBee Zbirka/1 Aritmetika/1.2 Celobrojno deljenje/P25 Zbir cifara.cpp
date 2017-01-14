//Problem: 1.2 - Zbir cifara
//Autor rešenja: Mladen Puzić
//Poslednju cifru nekog broja n dobijamo preko n%10, a poslednju cifru sa broja odbacujemo sa n/10
//Ako sacuvamo svaku poslednju cifru nakon svakog odbacivanja i saberemo ih, dobijamo zbir cifara
#include <cstdio>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int cifra1 = n%10;
	n = n/10;
	int cifra2 = n%10;
	n = n/10;
	int cifra3 = n%10;
	n = n/10;
	int cifra4 = n%10;
	int zbir = cifra1 + cifra2 + cifra3 + cifra4;
	printf("%d", zbir);
	return 0;
}

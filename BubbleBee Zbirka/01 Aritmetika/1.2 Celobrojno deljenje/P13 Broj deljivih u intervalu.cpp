//Problem: 1.2 - Broj deljivih u intervalu
//Autor rešenja: Mladen Puzić
//Broj deljivih u intervalu [a, b] jednak je razlici broja deljivih u [1, b] i [1, a-1]
//Broj deljivih u nekom intervalu [1, n] je n/k, jer je svaki k-ti broj deljiv sa k
#include <cstdio>

using namespace std;

int main(){
	int a, b, k;
	scanf("%d%d%d", &a, &b, &k);
    int rez = b/k - (a-1)/k;
	printf("%d", rez);
	return 0;
}

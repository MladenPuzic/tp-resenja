//Problem: 1.2 - Lift
//Autor rešenja: Mladen Puzić
//U slučaju da je n deljivo sa k, onda možemo tačno n/k puta da napunimo lift sa k ljudi
//U slučaju da nije, nakon što svaki put napunimo ceo lift sa k ljudi, nekoliko ljudi će ostati, pa lift mora još jednom da ode po njih
#include <cstdio>

using namespace std;

int main(){
	int n, k, res;
	scanf("%d%d", &n, &k);
	if(n%k == 0) res = n/k;
	else res = n/k + 1;
	printf("%d", res);
	return 0;
}

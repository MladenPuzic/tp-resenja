//Problem: 1.2 - Kruške
//Autor rešenja: Mladen Puzić
//U slučaju da je k deljivo sa u, ona ne mora da kupi nijednu više krušku
//U suprotnom, nakon što svima podeli maksimalan isti broj krušaka, učiteljici ostane k%u krušaka
//Znači, da bi svima dala po još jednu jabuku, potrebno joj je još u-k%u krušaka
#include <cstdio>

using namespace std;

int main(){
	int k, u;
	scanf("%d%d", &k, &u);
	if(k%u == 0) printf("0");
	else printf("%d", u-k%u);
	return 0;
}

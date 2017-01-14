//Problem: 1.2 - Kofa
//Autor rešenja: Mladen Puzić
//Ako je n deljivo sa k, onda se u tom trenutku kofa prazni pa je rezultat 0
//U suprotnom, od prethodnoh pražnjenja je prošlo n%k minuta, pa do sledećeg ima k-n%k
#include <cstdio>

using namespace std;

int main(){
	int k, n;
	scanf("%d%d", &k, &n);
    if(n%k == 0) printf("0");
    else printf("%d", k-n%k);
	return 0;
}

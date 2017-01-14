//Problem: 2.1 - Zbir godina braće i sestre
//Autor rešenja: Mladen Puzić
//Ako je broj godina jednog brata x, onda je ukupan zbir 4*x + 3, onda je x = (p-3)/4
//Ako je to ceo nenegativan broj, onda je odgovor da
#include <cstdio>
using namespace std;

int main(){
	int p;
	scanf("%d", &p);
	if((p-3)%4 == 0) printf("da");
	else printf("ne");
	return 0;
}

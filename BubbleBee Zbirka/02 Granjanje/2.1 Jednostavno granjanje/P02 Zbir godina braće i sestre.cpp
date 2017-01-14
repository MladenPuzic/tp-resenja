//Problem: 2.1 - Zbir godina braće i sestre
//Autor rešenja: Mladen Puzić
#include <cstdio>
using namespace std;

int main(){
	int p;
	scanf("%d", &p);
	if((p-3)%4 == 0) printf("da");
	else printf("ne");
	return 0;
}

//Problem: 2.1 - Jednakostranični trougao datog obima
//Autor rešenja: Mladen Puzić
//Odgovor je da ako je obim deljiv sa 3
//U tom slučaju stranica je jednaka o/3
#include <cstdio>
using namespace std;

int main(){
	int a,b,c;
	scanf("%d%d%d", &a, &b, &c);
	int o = a+b+c;
    if(o%3 == 0) printf("da %d", o/3);
	else printf("ne");
	return 0;
}

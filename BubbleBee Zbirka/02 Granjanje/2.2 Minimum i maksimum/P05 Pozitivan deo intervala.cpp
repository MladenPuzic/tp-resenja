//Problem: 2.2 - Pozitivan deo intervala
//Autor rešenja: Mladen Puzić
//Kada svaki negativan broj u intervalu zamenimo sa 0, mi skraćujemo negativan deo
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	a = max(0, a);
	b = max(0, b);
    printf("%d", b-a);
	return 0;
}

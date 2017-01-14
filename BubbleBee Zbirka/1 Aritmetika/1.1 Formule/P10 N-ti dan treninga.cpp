//Problem: 1.1 - N-ti dan treninga
//Autor rešenja: Mladen Puzić
//Prvog dana on mora da pretrči a metara, drugog dana a+1*d, ... n-tog dana on mora da pretrči a+(n-1)*d metara
#include <cstdio>

using namespace std;

int main(){
	int n, a, d;
	scanf("%d%d%d", &n, &a, &d);
	int res = a + (n-1)*d;
	printf("%d", res);
	return 0;
}

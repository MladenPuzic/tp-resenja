//Problem: 2.2 - Kuglice
//Autor rešenja: Mladen Puzić
//Iz jedne moramo izbaciti sve crvene, a iz druge sve plave, pa je rezultat manji od c1+p2 i p1+c2
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int c1, p1, c2, p2;
	scanf("%d%d%d%d", &c1, &p1, &c2, &p2);
  	printf("%d", min(c1 + p2, c2 + p1));
	return 0;
}

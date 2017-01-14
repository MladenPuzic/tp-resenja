//Problem: 1.1 - Putovanje
//Autor rešenja: Mladen Puzić
//Nazovimo potrebno vreme t. Pošto v = s/t, onda t = s/v
#include <cstdio>

using namespace std;

int main(){
	float v, s;
	scanf("%f%f", &v, &s);
	printf("%.2f", s/v);
	return 0;
}

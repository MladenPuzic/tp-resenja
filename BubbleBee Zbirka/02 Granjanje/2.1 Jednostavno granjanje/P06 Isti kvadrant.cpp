//Problem: 2.1 - Isti kvadrant
//Autor rešenja: Mladen Puzić
//Dve tačke su u istom kvadrantu akko su x1 i x2 istog znaka i y1 i y2 istog znaka,
//postoje i slučajevi u kojima je neki od x1,x2,y1,y2 jednak 0, treba pokriti i te slučajeve
#include <cstdio>
using namespace std;

int main(){
	int x1, y1, x2, y2;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    if(x1*x2 >= 0 && y1*y2 >= 0) printf("da");
	else printf("ne");
	return 0;
}

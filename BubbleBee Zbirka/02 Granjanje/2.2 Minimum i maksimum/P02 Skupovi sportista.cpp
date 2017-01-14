//Problem: 2.2 - Skupovi sportista
//Autor rešenja: Mladen Puzić
//Najviše može kad svi koji mogu da igraju jedan sport igraju i drugi, što je min(k, f)
//Najmanje može kada se najmanje poklapaju, ako se ne poklapaju to je 0, ako se poklapaju onda je k+f-n
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n, k, f;
	scanf("%d%d%d", &n, &k, &f);
	int rez1 = max(k+f-n, 0);
	int rez2 = min(f, k);
  printf("%d\n%d", rez1, rez2);
	return 0;
}

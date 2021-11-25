#include <iostream>
using namespace std;

void luas(int p, int l){
	int luas;
	luas=p*l;
	printf ("luasnya adalah		:%d/n",luas);
} 
int main()
{
	int p,l,L;
	printf("masukan sebuah luas dari ??/n");
	printf("masukan panjang :"); scanf ("%d",&p);
	printf("masukan lebar	:"); scanf ("%d",&l);
	luas(p,l);
	return 0;
}

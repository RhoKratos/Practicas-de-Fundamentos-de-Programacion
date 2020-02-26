#include <stdio.h>
int dado();

int main (){
	int x;
	x = dado(5) + 1;
	 printf("El dado arroj%c %d\n",162, x );
		
		dado(20);
		return 0;
		}
int dado(int x){
	int r, valor;
	 r=rand();
	 valor = (r % x) + 1;
		return valor;
	}

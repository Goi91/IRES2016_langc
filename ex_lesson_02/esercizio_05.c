//dato un intervallo di valori calcolare la somma dei valori contenuti nell'intervallo

#include <stdio.h>

void main() {
	int a = 2;
	int b = 8;
	
	if (b < a){
		int tmp = a;
		a = b;
		b = tmp;
	}
	
	int somma = 0;
	for(int i = a; i < b; i++) {
		somma += i;
	}
	
	printf("Somma = %d\n",somma);
}

//stampa a console la somma dei primi n numeri interi positivi dispari

#include <stdio.h>

void esercizio_03() {
	
	int n = 50;
	
	int somma = 0;
	int dispari = 0;
	int i = 0;
	
	while(dispari <= n) {
		if(i % 2 != 0) {
			somma += i;
			dispari++;
		}
		i++;
	}
	
	printf("Somma = %d\n",somma);
}

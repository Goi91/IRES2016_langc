//usa una funzione per calcolare la potenza tra due interi usando solo le operazioni di somma, sottrazione e la funzione mult dell'esercizio_06.c

#include <stdio.h>

int nmult(int a, int b) {
	int result = 0;
	for(int i = 0; i < b; i++){
		result += a;
	}
	return result;
}

int potenza(int a, int b) {
	int result = 1;
	for(int i = 0; i < b; i++){
		result = nmult(result,a);
	}
	return result;
}

void esercizio_07() {
	int a = 3;
	int b = 4;
	
	int risultato = potenza(a,b);
	
	printf("Risultato = %d\n",risultato);
}

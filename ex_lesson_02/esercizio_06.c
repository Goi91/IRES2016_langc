//usa una funzione per calcolare la moltiplicazione tra due interi usando solo la somma

#include <stdio.h>

int mult(int a, int b) {
	int result = 0;
	for(int i = 0; i < b; i++){
		result += a;
	}
	return result;
}

void main() {
	int a = 3;
	int b = 5;
	
	int risultato = mult(a,b);
	
	printf("Risultato = %d\n",risultato);
}

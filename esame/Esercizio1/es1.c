//calcola la media dei 100 elementi di un array contenente solo multipli di 3

#include <stdio.h>
#include <stdlib.h>

double media(int* valori, int len){
	double somma = 0;	//considerando somma come double la divisione nel return è tra double e non tra int
	for(int i = 0; i < len; ++i){
		somma += valori[i];
	}
	return somma / len;
}

int main(){
	
	int a[100];
	int dimensione = sizeof(a)/sizeof(int);
	for(int i = 0; i < dimensione; ++i){
		a[i] = 3 * (i + 1);
	}
		
	printf("Media = %.2f\n",media(a,dimensione));
	
	return EXIT_SUCCESS;
}

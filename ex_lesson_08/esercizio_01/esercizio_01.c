
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double spqr(int* a, int dimensione){
	double somma = 0;
	for(int i = 0; i < dimensione; ++i){
		somma += a[i] * a[i];
	}
	return sqrt(somma);
}

int main(){
	
	int a[10];
	for(int i = 0; i < 10; ++i){
		a[i] = 6 * (i + 1);
	}
	
	int dim = sizeof(a)/sizeof(int);
	
	double risultato = spqr(a,dim);
	
	printf("risultato = %.5f\n",risultato);
	
	return EXIT_SUCCESS;
}

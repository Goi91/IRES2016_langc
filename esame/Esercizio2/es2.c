//dati due array uno di interi pari e l'altro di dispari, creare in terzo array unendo i due precedenti alternativamente

#include <stdio.h>
#include <stdlib.h>

void zip(int* a, int* b, int* res, int d){
	int cA = 0;	//devo usare due indici per percorrere indipendentemente gli array di input
	int cB = 0;
	for(int i = 0; i < d * 2; ++i){
		if(i % 2 == 0){
			res[i] = a[cA++];
		}
		else{
			res[i] = b[cB++];
		}
	}
}

int main(){
	
	int dim = 100;	//la dimensione deve essere la stessa quindi la specifico primo e creo gli array in base ad essa
	int a[dim];
	int b[dim];
	for(int i = 0; i < dim; ++i){
		a[i] = 2 * i;
		b[i] = a[i] + 1;
	}
	
	int risultato[dim * 2];
	
	zip(a,b,risultato,dim);
		
	printf("Risultato: \n");
	for(int i = 0; i < dim * 2; ++i){
		printf("%d\n",risultato[i]);
	}
	
	return EXIT_SUCCESS;
}

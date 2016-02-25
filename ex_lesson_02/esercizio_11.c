//ordina un array mettendo all'inizio gli elementi dispari

#include <stdio.h>

void main() {
	int A[] = {2,4,7,3,2,9,5};
	int length = sizeof(A) / sizeof(int);
	int B[length];
	
	for(int i = 0; i < length;){	//percorro l'array B
		for(int j = 0; j < length; j++){	//cerco i dispari in A
			if(A[j] % 2 != 0){
				B[i] = A[j];
				i++;
			}
		}
		for(int j = 0; j < length; j++){	//cerco i pari in A
			if(A[j] % 2 == 0){
				B[i] = A[j];
				i++;
			}
		}
	}
	for(int i = 0; i < length; i++){
		printf("B[%d] = %d\n",i,B[i]);
	}
}

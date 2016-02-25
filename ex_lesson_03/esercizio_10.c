//crea un array di n elementi ognuno uguale ad a

#include <stdio.h>

void esercizio_10() {
	int a = 4;
	int n = 9;
	
	int myarray[n];
	
	for(int i = 0; i < n; i++){
		myarray[i] = a;
		printf("myarray[%d] = %d\n",i,myarray[i]);
	}
}

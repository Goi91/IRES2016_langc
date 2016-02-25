//crea e stampa a console un array di 20 elementi contenenti i valori da 20 a 1

#include <stdio.h>

void esercizio_01() {
	
	int myarray[20];
	
	int myarraylength = sizeof(myarray) / sizeof(int);
	
	for (int i = 0; i < myarraylength; i++){
		myarray[i] = 20 - i;
		printf("myarray[%d] = %d\n", i, myarray[i]);
	}
}

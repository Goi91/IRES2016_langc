//dato un array di interi crea un secondo array con gli elementi in ordine inverso

#include <stdio.h>

void esercizio_09() {
	int myarray[] = {2,4,7,3,9};
	
	int myarraylength = sizeof(myarray) / sizeof(int);
	
	int myinvertedarray[myarraylength];
	
	for(int i = 0; i < myarraylength; i++){
		myinvertedarray[i] = myarray[myarraylength - 1 - i];
		printf("myinvertedarray[%d] = %d\n",i,myinvertedarray[i]);
	}
}

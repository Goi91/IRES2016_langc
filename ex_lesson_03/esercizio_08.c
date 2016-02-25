//dato un array stampa gli elementi nell'ordine inverso

#include <stdio.h>

void esercizio_08() {
	int myarray[] = {2,4,7,3,9};
	
	int myarraylength = sizeof(myarray) / sizeof(int);
	
	for(int i = myarraylength - 1; i >= 0; i--){
		printf("myarray[%d] = %d\n",i,myarray[i]);
	}
}

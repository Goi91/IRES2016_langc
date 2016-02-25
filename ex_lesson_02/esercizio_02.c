//stampa la somma dei valori di un array fino al primo valore negativo

#include <stdio.h>

void main() {
	
	int myarray[] = {2,4,6,-2,1};
	
	int myarraylength = sizeof(myarray) / sizeof(int);
	
	int somma = 0;
	for (int i = 0; i < myarraylength; i++) {
		if (myarray[i] < 0) {
			break;
		}
		somma += myarray[i];
	}
	printf("Somma = %d\n",somma);
}

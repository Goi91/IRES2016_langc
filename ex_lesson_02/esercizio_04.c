//stampa a console la media dei valori di un array

#include <stdio.h>

void main() {
	
	int myarray[] = {2,4,6,-2,1};
	
	int myarraylength = sizeof(myarray) / sizeof(int);
	
	int somma = 0;
	for(int i = 0; i < myarraylength; i++){
		somma += myarray[i];
	}
	
	float media = somma / myarraylength;
	
	printf("Media = %f\n",media);
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "esercizio_04.h"

int main(){
	
	//for(int i = 1; i <= 100000; ++i){
		int i = 1;
		Software s;
		char si;
		sprintf(&si,"%d",i);
		char nome[] = {'S','W',si};
		setName(&s,nome);
		setVersion(&s,i);
		printf("Software %d\n",i);
		char getn[4];
		getName(&s,&getn);
		printf("Nome: %s\n",getn);
		printf("Versione %d\n",getVersion(&s));
				
	//}
	
	return EXIT_SUCCESS;
}

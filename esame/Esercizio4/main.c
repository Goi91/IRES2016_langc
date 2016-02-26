
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stud.h"

int main(){
	int n_stud = 100000;
	
	Studente* stud;
	stud = malloc(sizeof(Studente) * n_stud);	//crea spazio per tutti gli studenti
	
	char* buf = malloc(15);
	
	for(int i = 1; i < n_stud + 1; ++i){	//da consegna gli studenti devono partire da 0, non da 1
		sprintf(buf,"Cognome_%d",i);
		setCognome(&stud[i - 1],buf);
		setVoto(&stud[i - 1],i%10);
	}
	
	int somma = 0;
	for(int i = 1; i < n_stud + 1; ++i){
		printf("Studente %d:\n",i);
		getCognome(&stud[i - 1],buf,15);
		printf("Cognome: \"%s\"\n",buf);
		printf("Voto: %d\n\n",getVoto(&stud[i - 1]));
		somma += getVoto(&stud[i - 1]);
	}
	
	printf("Somma dei Voti: %d\n",somma);
	
	return EXIT_SUCCESS;
}

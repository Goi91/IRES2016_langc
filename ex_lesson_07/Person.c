//definisco i metodi della classe Person
//lo compilo come .o perchè è un oggetto

#include <string.h>	//define strcpy
#include "Person.h"	//include la definizione della classe Persona
#include <stdlib.h> //include malloc

void Person_setName(Person* this, char* name) {	//modifica il nome della persona
	int length = sizeof(name)/sizeof(char);	//trovo la dimensione in byte richiesta per inserire il nome
	this->name = malloc(length + 1);	//creo lo spazio necessario +1 per \0 (\0 non serve inserirlo alla fine, tanto la dimensione è giusta)
	strcpy(this->name, name);	//inserisco il nome
}

void Person_setSurname(Person* this, char* surname) {	//modifica il cognome della persona
	int length = sizeof(surname)/sizeof(char);
	this->surname = malloc(length + 1);
	strcpy(this->surname, surname);
}

void Person_BigliettoDaVisita(Person* this, char* bv) {	//restituisce un biglietto da visita con nome e cognome
	strcpy(bv,this->name);
	strcat(bv," ");
	strcat(bv,this->surname);
}

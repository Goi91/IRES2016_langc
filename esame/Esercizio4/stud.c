
#include <stdlib.h>
#include <string.h>

#include "stud.h"

void setCognome(Studente* this, char* surname){
	int length = strlen(surname);
	this->surname = malloc(length + 1);
	strcpy(this->surname, surname);
}

void getCognome(Studente* this, char* surname, int length){
	strncpy(surname,this->surname,length);
	surname[length + 1] = '\0';
}

void setVoto(Studente* this, int voto){
	this->voto = voto;
}

int getVoto(Studente* this){
	return this->voto;
}

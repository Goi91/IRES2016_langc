
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "esercizio_04.h"

void setName(Software* this, char* name){
	int length = strlen(name);
	this->name = malloc(length + 1);
	strcpy(this->name,name);
}

void getName(Software* this, char* gn){
	strcpy(gn,this->name);
}

void setVersion(Software* this, int version){
	this->version = version;
}

int getVersion(Software* this){
	return this->version;
}

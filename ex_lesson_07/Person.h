//definisco la classe Person

#ifndef Person_h	//include solo una volta, se viene richiamata un altra volta non la include poichè è già inclusa
#define Person_h

typedef struct {
	char *name;	//vengono considerati come riferimenti, in questo modo posso assegnargli solo la mem necessaria
	char *surname;
	int age;
} Person;

//ora elenco i metodi associati alla persona
void Person_setName(Person* this, char* name);
void Person_setSurname(Person* this, char* surname);
void Person_BigliettoDaVisita(Person* this, char* bv);

#endif

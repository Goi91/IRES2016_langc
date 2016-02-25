//testo la classe Azienda
//la compilo normalmente perchè non è un oggetto ma ha il main
//per compilare usare il comando da terminale:
// gcc -o testaAzienda testaAzienda.c Azienda.o Person.o

#include <stdio.h>	//define printf
#include <stdlib.h>	//define EXIT_SUCCESS

#include "Azienda.h"	//includo la classe di oggetti Azienda
#include "Person.h"	//includo la classe di oggetti Persona

int main() {
	Azienda a;
	Azienda_init(&a);	//inizializzo azienda
	
	Azienda_setPIVA(&a,"12345678901");	////richiede il puntatore all'azienda, quindi uso &
	Azienda_setRagioneSociale(&a,"ACME spa");
	
	char timbro[30];
	Azienda_getTimbro(&a,timbro);
	printf("%s\n",timbro);
	
	printf("\n----------------- \n\n");
	
	Person al;
	Person_setName(&al,"Al");
	Person_setSurname(&al,"Pacino");
	Person john;
	Person_setName(&john,"John");
	Person_setSurname(&john,"Ross");
	Person jack;
	Person_setName(&jack,"Jack");
	Person_setSurname(&jack,"Reaper");
	Azienda_addDipendente(&a,al);
	Azienda_addDipendente(&a,john);
	Azienda_addDipendente(&a,jack);
	
	Azienda_printDipendenti(&a);
	
	printf("\n----------------- \n\n");
	
	char effettivi[300];
	Azienda_getDipendenti(&a,effettivi);
	printf("%s",effettivi);
	
	return EXIT_SUCCESS;
}

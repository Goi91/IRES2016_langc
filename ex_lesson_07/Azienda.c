//definisco i metodi della classe Azienda
//lo compilo come .o perchè è un oggetto

#include <string.h>	//define strcpy
#include <stdio.h>	//define printf

#include "Azienda.h"	//include la definizione della classe azienda

#include "Person.h"

void Azienda_setPIVA(Azienda* this, char* piva) {	//modifica la partiva IVA dell'azienda
	strcpy(this->piva,piva);
	int length = sizeof(this->piva)/sizeof(char);
	strncpy(this->piva,piva,length);
	this->piva[length-1] = '\0';
}

void Azienda_setRagioneSociale(Azienda* this, char* ragione_sociale) {	//modifica la ragione sociale dell'azienda
	strcpy(this->ragione_sociale,ragione_sociale);
	int length = sizeof(this->ragione_sociale)/sizeof(char);
	strncpy(this->ragione_sociale,ragione_sociale,length);
	this->ragione_sociale[length-1] = '\0';
}

void Azienda_getTimbro(Azienda* this, char* timbro) {	//restituisce un timbro con ragione sociale e partita IVA
	strcpy(timbro,this->ragione_sociale);
	strcat(timbro,"\n");
	strcat(timbro,"P.IVA: ");
	strcat(timbro,this->piva);
}

void Azienda_init(Azienda* this) {	//inizializza il numero di dipendenti a 0
	this->n_dipendenti = 0;
}

void Azienda_addDipendente(Azienda* this, Person dipendente) {	//aggiunge un dipendente al'azienda
	this->dipendenti[this->n_dipendenti] = dipendente;
	this->n_dipendenti++;
}

void Azienda_printDipendenti(Azienda* this) {	//stampa a schermo i biglietti da visita dei dipendenti
	char bvDip[100];
	int length = sizeof(this->dipendenti)/sizeof(Person);
	for(int i = 0; i < length && i < this->n_dipendenti; i++) {
		char bv[50];
		Person_BigliettoDaVisita(&this->dipendenti[i],bv);	
		/*devo mettere & perchè il metodo Person_BigliettoDaVisita si aspetta un puntatore, non un valore com'è invece this->dipendenti[i]
		* in modo analogo senza la & si può modificare il metodo:
		*
		* void Person_BigliettoDaVisita(Person* this, char* bv) {	
		* 		strcpy(bv,this->name);
		* 		strcat(bv," ");
		* 		strcat(bv,this->surname);
		* }
		* 
		* in:
		* 
		* void Person_BiliettoDaVisita(Person this, char* bv) {
		* 		strcpy(bv,this.name);
		* 		strcat(bv," ");
		* 		strcat(bv,this.surname);
		* }
		*/
		printf("%s \n",bv);
	}
}

void Azienda_getDipendenti(Azienda* this, char* effettivi) {	//restituisce il timbro dell'azienda seguito dai bilgietti da visita dei suoi dipendenti
	char timbro[30];
	Azienda_getTimbro(this,timbro);
	int length = sizeof(this->dipendenti)/sizeof(Person);
	strcpy(effettivi,timbro);
	strcat(effettivi,"\n");
	for(int i = 0; i < length && i < this->n_dipendenti; i++) {
		char bv[50];
		Person_BigliettoDaVisita(&this->dipendenti[i],bv);
		strcat(effettivi,bv);
		strcat(effettivi,"\n");
	}
}

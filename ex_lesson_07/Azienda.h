//definisco la classe Azienda

#ifndef Azienda_h	//include solo una volta, se viene richiamata un altra volta non la include poichè è già inclusa
#define Azienda_h

#include "Person.h"

typedef struct {
	char piva[11+1];	//codice numerico di 11 cifre + \0
	char ragione_sociale[50];	//nome dell'azienda
	Person dipendenti[10];	//elenco di dipendenti
	int n_dipendenti;	//numero di dipendenti
} Azienda;

//ora elenco i metodi associati all'azienda
void Azienda_setPIVA(Azienda* this, char* piva);
void Azienda_setRagioneSociale(Azienda* this, char* ragione_sociale);
void Azienda_getTimbro(Azienda* this, char* timbro);

void Azienda_init(Azienda* this);
void Azienda_addDipendente(Azienda* this, Person dipendente);

void Azienda_printDipendenti(Azienda* this);
void Azienda_getDipendenti(Azienda* this, char* effettivi);

#endif


#ifndef stud_h
#define stud_h

typedef struct{
	char* surname;
	int voto;
} Studente;

void setCognome(Studente* this, char* surname);
void getCognome(Studente* this, char* surname, int lenght);
void setVoto(Studente* this, int voto);
int getVoto(Studente* this);

#endif

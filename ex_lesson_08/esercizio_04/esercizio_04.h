#ifndef esercizio_04_h
#define esercizio_04_h

typedef struct{
	char* name;
	int version;
} Software;

void setName(Software* this, char* name);
void getName(Software* this, char* gn);
void setVersion(Software* this, int version);
int getVersion(Software* this);

#endif

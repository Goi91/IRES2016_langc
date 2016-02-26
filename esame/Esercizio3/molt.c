
#include <stdio.h>

#include "sum.h"

int molt(int a, int b){
	int risultato = 0;
	for(int i = 0; i < b; ++i){
		risultato += a;
	}
	return risultato;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void quad(int* a, int* b,int dimensione){
	for(int i = 0; i < dimensione; ++i){
		b[i] = a[i] * a[i];
	}
}

int main(){
	
	int a[10];
	for(int i = 0; i < 10; ++i){
		a[i] = 3 * (i + 1);
	}
	int dim = sizeof(a)/sizeof(int);
	
	int b[dim];
	
	quad(a,b,dim);
	
	
	for(int i = 0; i < dim; ++i){
		printf("res[i] = %d\n",b[i]);
	}
	
	return EXIT_SUCCESS;
}

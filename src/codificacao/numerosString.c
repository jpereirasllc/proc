#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../prototipos.h"

void gerarNumerosString(int numSoma[],int tamNumSoma){
	
	char code [101] = "";
	char letra [101];
	int indiceNumSoma = 0;
	
	while(indiceNumSoma <= tamNumSoma - 1){
		
		sprintf(letra,"%d",numSoma[indiceNumSoma]);
		strcat(code,letra);
		strcat(code,"_");
		indiceNumSoma++;
	}
	//printf("\ncode: %s",code);
	//getchar();
	
	gerarCodificacaoNumerosString(code);
	
	/*
	int indice = 0;
	printf("tamNumSoma: %d\n",tamNumSoma);
	
	printf("numSoma: \n");
	while(indice <= tamNumSoma - 1){
		
		printf("%d\n",numSoma[indice]);
		indice++;
	}
	getchar();
	*/
}

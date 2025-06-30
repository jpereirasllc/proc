#include <stdio.h>
#include <stdlib.h>
#include "../prototipos.h"

void somarNumerosCaracteresEntrada(int numEntradaCodificar[],int numEntradaCodificadora[],int tamNumEntradaCodificar,int tamNumEntradaCodificadora)
{
	int indiceNumEntradaCodificar = 0;
	int indiceNumEntradaCodificadora = 0;
	int indice = 0;
	int numSoma [60];
	int indiceNumSoma = 0;
	int tamNumSoma = 0;

	if(tamNumEntradaCodificadora < tamNumEntradaCodificar){
		while(indice <= tamNumEntradaCodificadora - 1){
			numSoma[indiceNumSoma] = numEntradaCodificadora[indice] + numEntradaCodificar[indice];
			tamNumSoma++;
			//printf("\nnumSoma: %d",numSoma[indiceNumSoma]);
			indiceNumSoma++;
			indice = indice + 1;
		}
		while(indice <= tamNumEntradaCodificar - 1){
			numSoma[indiceNumSoma] = numEntradaCodificar[indice];
			tamNumSoma++;
			//printf("numSoma: %d",numSoma[indiceNumSoma]);
			indiceNumSoma++;
			indice = indice + 1;
		}
	}else{
		while(indice <= tamNumEntradaCodificar - 1){
			numSoma[indiceNumSoma] = numEntradaCodificar[indice] + numEntradaCodificadora[indice];
			tamNumSoma++;
			//printf("numSoma: %d",numSoma[indiceNumSoma]);
			indiceNumSoma++;
			indice = indice + 1;
		}
	}
	indice = 0;
	//printf("\n\nConjunto Numeros Somados\n");
	while(indice <= indiceNumSoma - 1)
	{
		//printf("%d",numSoma[indice]);
		indice++;
	}
	//getchar();
	//00:00 | 27/04/2024
	gerarNumerosString(numSoma,tamNumSoma);
}


/*
	system("cls");
	printf("Processo somarNumerosCaracteresEntrada\n");
	printf("Numeros Entrada Codificar\n");
	printf("tamNumEntradaCodificar: %d\n",tamNumEntradaCodificar);
	printf("tamNumEntradaCodificadora: %d\n",tamNumEntradaCodificadora);
	while(indiceNumEntradaCodificar <= tamNumEntradaCodificar - 1)
	{
		printf("%d\n",numEntradaCodificar[indiceNumEntradaCodificar]);
		indiceNumEntradaCodificar++;
	}
	
	printf("\n\nNumeros Entrada Codificadora\n");
	while(indiceNumEntradaCodificadora <= tamNumEntradaCodificadora - 1)
	{
		printf("%d\n",numEntradaCodificadora[indiceNumEntradaCodificadora]);
		indiceNumEntradaCodificadora++;
	}
	getchar();
	*/
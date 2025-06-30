/*
	Recebe a String de Números para a Palavra Codificada
	Converte a String de Números para o formato Array de Inteiros
	
	Recebe pela passagem de parâmetros a String de Caracteres da
	Entrada Codificadora
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../prototipos.h"

void converteStringNumerosPalavraCodificada(char valueNum[],char entradaCodificadora[])
{
	int indice = 0;
	int tam = strlen(valueNum);
	char caractere;
	char armazenaCaractereNumero[10];
	char copiaCaractereNumero[10];
	char concatenaCaractereNumero[50] = "";
	int inteiros[50];
	int tamInteiros;
	int indiceInteiros = 0;
	int num;
	
	while(indice <= tam - 1){
		if(valueNum[indice] != '_'){
			caractere = valueNum[indice];
			sprintf(armazenaCaractereNumero,"%c",caractere);
			strcpy(copiaCaractereNumero,armazenaCaractereNumero);
			strcat(concatenaCaractereNumero,copiaCaractereNumero);
		}
		else if(valueNum[indice] == '_'){
			num = atoi(concatenaCaractereNumero);
			inteiros[indiceInteiros] = num;
			indiceInteiros++;
			strcpy(concatenaCaractereNumero,"");
		}
		indice++;
	}
	tamInteiros = indiceInteiros;
	indiceInteiros = 0;
	/*
	printf("\nConjunto de Inteiros Pos-Conversao: \n");
	while(indiceInteiros <= tamInteiros - 1)
	{
		printf("%d",inteiros[indiceInteiros]);
		indiceInteiros++;
	}
	*/
	//printf("\nString de Numeros da Palavra Codificada: %s\n",valueNum);
	//printf("String da Entrada Codificadora: %s\n",entradaCodificadora);
	//getchar();
	
	/*
		Enviar Array de Inteiros para o processo
		de geração de números para os caracteres da
		entradaCodificadora
		
		Por fim os dados serão enviados para o
		processo de Subtração
	*/
	gerarNumerosCaracteresEntradaCodificadora(entradaCodificadora,inteiros,tamInteiros);
}

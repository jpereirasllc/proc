/*
	Gerar String de números Palavra Codificada
*/

#include <stdio.h>
#include <string.h>
#include "../prototipos.h"


void gerarStringNumerosEntradaCodificada(char entradaCodificada[],char entradaCodificadora[])
{
	int indiceEntradaCodificada = 0;
	int tamEntradaCodificada = strlen(entradaCodificada);
	char caracteres [60] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
	int indiceCaracteres = 0;
	int tamCaracteres = strlen(caracteres);
	char num [10] = "";
	char arrayNumeros [101];
	char valueNum [101];
	int indiceArrayNum = 0;
	int tamArrayNum;
	
	while(indiceEntradaCodificada <= tamEntradaCodificada - 1)
	{
		while(indiceCaracteres <= tamCaracteres - 1)
		{
			if(caracteres[indiceCaracteres] == entradaCodificada[indiceEntradaCodificada]){
				sprintf(num,"%d",indiceCaracteres);
				strcat(valueNum,num);
			}
			else if(entradaCodificada[indiceEntradaCodificada] == '_'){
				strcat(valueNum,"_");
				break;
			}
			indiceCaracteres++;
		}
		indiceCaracteres = 0;
		indiceEntradaCodificada++;
	}
	//printf("String de numeros: %s",valueNum);
	//getchar();
	converteStringNumerosPalavraCodificada(valueNum,entradaCodificadora);
}

/*
	Recebe a String de Caracteres da Entrada Codificadora
	Gera um Array de Inteiros
	
	Após gerar os valores numéricos, os dados juntamente com
	o Array de inteiros para a Palavra Codificada são enviados para
	o processo de Subtração onde serão gerados os valores
	numéricos para se obter os caracteres para a palavra
	originalmente codificada
*/

#include <stdio.h>
#include <string.h>
#include "../prototipos.h"

void gerarNumerosCaracteresEntradaCodificadora(char entradaCodificadora[],int inteiros[],int tamInteiros)
{
	char caracteres [60] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
	int indiceCaracteres = 0;
	int tamCaracteres = strlen(caracteres);
	int tamEntradaCodificadora = strlen(entradaCodificadora);
	int indiceEntradaCodificadora = 0;
	int numEntradaCodificadora[101];
	int indiceNumEntradaCodificadora = 0;
	int tamNumEntradaCodificadora = 0;
	int indiceInteiros = 0;
	int indice = 0;
	int numSubtracao [101];
	int indiceNumSubtracao = 0;
	int tamSubtracao = 0;
	
	//printf("gerarNumerosCaracteresEntradaCodificadora\n");
	while(indiceEntradaCodificadora <= tamEntradaCodificadora - 1){
		while(indiceCaracteres <= tamCaracteres - 1){
			if(entradaCodificadora[indiceEntradaCodificadora] == caracteres[indiceCaracteres]){
				numEntradaCodificadora[indiceNumEntradaCodificadora] = indiceCaracteres;
				tamNumEntradaCodificadora++;
				indiceNumEntradaCodificadora++;
				break;
			}
			else{
				indiceCaracteres++;
			}
		}
		indiceEntradaCodificadora++;
		indiceCaracteres = 0;
	}
	//tamNumEntradaCodificadora = indiceNumEntradaCodificadora;
	indiceNumEntradaCodificadora = 0;
	/*
	printf("\nwhile\n");
	while(indiceNumEntradaCodificadora <= tamNumEntradaCodificadora - 1)
	{
		printf("Numeros Entrada Codificadora:::%d\n",numEntradaCodificadora[indiceNumEntradaCodificadora]);
		indiceNumEntradaCodificadora++;
	}
	printf("\n\nwhile para Inteiros\n");
	while(indiceInteiros <= tamInteiros - 1){
		printf("Elementos Inteiros: %d\n",inteiros[indiceInteiros]);
		indiceInteiros++;
	}
	
	getchar();
	*/

	subtracaoNumerosEntradaCodificarDecodificar(inteiros,tamInteiros,numEntradaCodificadora,tamNumEntradaCodificadora);
}

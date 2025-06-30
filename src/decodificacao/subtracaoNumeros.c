
#include <stdio.h>
#include "../prototipos.h"

void subtracaoNumerosEntradaCodificarDecodificar(int inteiros[],int tamInteiros,int numEntradaCodificadora[],int tamNumEntradaCodificadora)
{
	int subtracao [101];
	int indiceSubtracao = 0;
	int tamSubtracao = 1;
	int indiceInteiros = 0;
	int indiceNumEntradaCodificadora = 0;
	int indice = 0;

	if(tamNumEntradaCodificadora < tamInteiros)
	{
		while(indice <= tamNumEntradaCodificadora - 1)
		{
			subtracao[indice] = numEntradaCodificadora[indice] - inteiros[indice];
			//printf("%d ",subtracao[indice]);
			//printf("Tamanho Subtracao: %d\n",tamSubtracao);
			indiceSubtracao++;
			indice++;
			indiceNumEntradaCodificadora++;
			indiceInteiros++;
			//tamSubtracao++;
		}
		while(indice <= tamInteiros - 1)
		{
			subtracao[indice] = inteiros[indice];
			//printf("%d ",subtracao[indice]);
			//printf("Tamanho Subtracao: %d\n",tamSubtracao);
			indiceSubtracao++;
			indice++;
			indiceSubtracao++;
			indiceInteiros++;
			//tamSubtracao++;
		}
	}
	else{
		while(indice <= tamInteiros - 1){
			subtracao[indice] = inteiros[indice] - numEntradaCodificadora[indice];
			//printf("%d ",subtracao[indice]);
			//printf("Tamanho Subtracao: %d\n",tamSubtracao);
			indiceSubtracao++;
			indice++;
			indiceSubtracao++;
			indiceNumEntradaCodificadora++;
			//tamSubtracao++;
		}
	}
	tamSubtracao = indice;
	modificaSinalNegativo(subtracao,tamSubtracao);
	//getchar();
}

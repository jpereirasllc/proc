#include <stdio.h>
#include <string.h>
#include "../prototipos.h"

void gerarNumerosEntradaCodificar (char entradaCodificar [], char entradaCodificadora [])
{
	char caracteres [60] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
	int indiceCaracteres = 0;
	int tamCaracteres = strlen(caracteres);
	int tamEntradaCodificar = strlen(entradaCodificar);
	int indiceEntradaCodificar = 0;
	int tamEntradaCodificadora = strlen(entradaCodificadora);
	int indiceEntradaCodificadora = 0;
	int numEntradaCodificar [tamEntradaCodificar];
	int indiceNumEntradaCodificar = 0;
	int numEntradaCodificadora [tamEntradaCodificadora];
	int indiceNumEntradaCodificadora = 0;
	int tamNumEntradaCodificar = 0;
	int tamNumEntradaCodificadora = 0;
	
	while(indiceEntradaCodificar <= tamEntradaCodificar - 1)
	{
		while(indiceCaracteres <= tamCaracteres - 1)
		{
			if(entradaCodificar[indiceEntradaCodificar] == caracteres[indiceCaracteres])
			{
				numEntradaCodificar[indiceNumEntradaCodificar] = indiceCaracteres;
				//printf("\n%c %d",caracteres[indiceCaracteres], numEntradaCodificar[indiceNumEntradaCodificar]);
				tamNumEntradaCodificar++;
				indiceNumEntradaCodificar++;
				break;
			}
			else{
				indiceCaracteres++;
			}
		}
		indiceEntradaCodificar++;
		indiceCaracteres = 0;
	}
	//printf("\n");
	indiceNumEntradaCodificar = 0;
	indiceCaracteres = 0;
	while(indiceEntradaCodificadora <= tamEntradaCodificadora - 1)
	{
		while(indiceCaracteres <= tamCaracteres - 1)
		{
			if(entradaCodificadora[indiceEntradaCodificadora] == caracteres[indiceCaracteres])
			{
				numEntradaCodificadora[indiceNumEntradaCodificadora] = indiceCaracteres;
				//printf("\n%c %d",caracteres[indiceCaracteres], numEntradaCodificadora[indiceNumEntradaCodificadora]);
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
	//getchar();
	somarNumerosCaracteresEntrada(numEntradaCodificar,numEntradaCodificadora,tamNumEntradaCodificar,tamNumEntradaCodificadora);
}
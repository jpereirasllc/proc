#include <stdio.h>
#include <stdlib.h>
#include "../prototipos.h"


void entradaDadosCodificar (void)
{
	char entradaCodificar [101];
	char entradaCodificadora [101];
	system("clear");
	printf("\n"
               "Processo Codificacao\n"
               "******************************\n\n");
	printf(	"Mensagem a ser codificada\n"
			">_");
	fgets(entradaCodificar,101,stdin);
	setbuf(stdin,NULL);
	printf(	"Chave secreta\n"
			">_");
	fgets(entradaCodificadora,101,stdin);
	setbuf(stdin,NULL);
	
	gerarNumerosEntradaCodificar (entradaCodificar, entradaCodificadora);
}

void entradaDadosDecodificar (void)
{
	char entradaCodificada [101];
	char entradaCodificadora [101];
	system("clear");
	printf(	"\n"
			"Processo Decodificacao\n"
			"******************************\n\n");
	printf(	"Mensagem codificada\n"
			">_");
	fgets(entradaCodificada,101,stdin);
	setbuf(stdin,NULL);
	printf(	"Chave secreta\n"
                ">_");
	fgets(entradaCodificadora,101,stdin);
	setbuf(stdin,NULL);
	
	gerarStringNumerosEntradaCodificada(entradaCodificada,entradaCodificadora);
}

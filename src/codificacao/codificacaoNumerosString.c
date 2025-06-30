

#include <stdio.h>
#include <string.h>
#include "../prototipos.h"

void gerarCodificacaoNumerosString(char code[])
{
  char lista[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
  int indiceLista = 0;
  int indiceCode = 0;
  char caractere;//Recebe caractere de "code"
  char codificado[151];
  char indiceCodificado;
  char caractereLista;
  char caracLista[2];


  while(indiceCode <= strlen(code) - 1)
  {
    if(code[indiceCode] != '_')
    {
      caractere = code[indiceCode];
//      printf("caractere: %c\n",caractere);
      indiceLista = caractere - '0';//converte caractere tipo char de code para tipo int
      //printf("%d\n",indiceLista);
      caractereLista = lista[indiceLista];
  //    printf("Caractere da lista: %c\n",caractereLista);
      sprintf(caracLista,"%c",caractereLista);
      strcat(codificado,caracLista);
//      printf("%s\n",codificado);
    }
    else{
      strcat(codificado,"_");
    }
    indiceCode++;
  }
  
//  printf("\ncode: %s\n",code);
  printf("\n************************\n"
         "Mensagem codificada: \n\n%s\n",codificado);
  getchar();

/*	
	int tamCode = strlen(code);
	int indiceCode = 0;
	char caracteres [60] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
	int indiceCaracteres = 0;
	int tamCaracteres = strlen(caracteres);
	char valor;
	char cripto [101];
	char letra [101];
	int iD;
	int indiceCripto = 0;
	
        printf("Conteudo de code: %s\n",code);
	while(indiceCode <= tamCode - 1){
		if(code[indiceCode] != '_'){
			
			valor = code[indiceCode];
			printf("Conteudo da variavel valor: %d\n",valor);
			iD = valor - '0';
			printf("\nValor de iD: %d\n",iD);
			valor = caracteres[iD];
			sprintf(letra,"%c",valor);
			strcat(cripto,letra);
		}else{
			printf("cripto: %c ",cripto[indiceCripto]);
			indiceCripto++;
			strcat(cripto,"_");
		}
		indiceCode++;
	}
	printf("\nPalavra Codificada: %s",cripto);
	printf("\nComprimento de cripto: %d\n",strlen(cripto));
	getchar();
	//00:12 | 29/04/2024
*/
}

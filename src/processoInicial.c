/*
Criptografia de mensagens
Autor: Jeoás P.Silva

Um projeto simples de criptografia simétrica 
que eu desenvolvi apenas para exercitar minha
lógica de programação 

  21:50 | 24/04/2024 | Producao de Teste iniciada

  Versão de Testes concluída em: 01/05/2024 | 01:27
  Versao experimental concluida em: 29/06/2025 | 20:14
*/


#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

void main (){
	
  int opcao;

  while(1){
    system("clear");
    printf("\n"
           "Hello world!\n"
           "*********************\n"
           "[1] - Codificar\n"
           "[2] - Decodificar\n"
           "[3] - Sair\n"
           ">_");
    scanf("%d",&opcao);
    setbuf(stdin,NULL);
    if(opcao == 1)
      entradaDadosCodificar();
    else if(opcao == 2)
      entradaDadosDecodificar();
    else if(opcao == 3){
      system("clear");
      printf("\nPrograma encerrado...\n"
             "*****************************\n"
             "Pressione 'Enter' para sair ");
      getchar();
      system("clear");
      break;
    }
  }
}

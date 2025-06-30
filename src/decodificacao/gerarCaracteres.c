#include <stdio.h>
#include <string.h>
#include "../prototipos.h"

void gerarCaracteresNumericosEntradaCodificar(int numeros[],int tamSubtracao)
{
    char letras [60] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
    int indiceLetras = 0;
    int indiceNumeros = 0;
    char palavra [101];
    int indicePalavra = 0;


    while(indiceNumeros <= tamSubtracao - 1)
    {
        palavra[indicePalavra] = letras[numeros[indiceNumeros]];
        indicePalavra++;
        indiceNumeros++;
    }
    indicePalavra = 0;
    printf("\n\n**************************\n"
           "Mensagem decodificada:\n\n");
    while(indicePalavra <= tamSubtracao - 1){
        printf("%c",palavra[indicePalavra]);
        indicePalavra++;
    }
    getchar();
}

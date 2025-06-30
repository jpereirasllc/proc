
#include <stdio.h>
#include "../prototipos.h"

void modificaSinalNegativo(int subtracao[],int tamSubtracao)
{
    int numeros [101];
    int indice = 0;

    //printf("\nQuantidade de Elementos da Subtracao: %d\n",tamSubtracao);
    while(indice <= tamSubtracao - 1)
    {
        if(subtracao[indice] < 0){
            numeros[indice] = subtracao[indice] *- 1;
        }
        else{
            numeros[indice] = subtracao[indice];
        }
        //printf("%d\n",numeros[indice]);
        indice++;
    }
    indice = 0;
    //while(indice <= tamSubtracao - 1){
    //    printf("%d ",numeros[indice]);
    //    indice++;
    //}
    //getchar();
    //Modificação em: 01/05/2024 | 00:28

    gerarCaracteresNumericosEntradaCodificar(numeros,tamSubtracao);
}

#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

void entradaDadosCodificar (void);
void entradaDadosDecodificar (void);
void gerarNumerosEntradaCodificar (char entradaCodificar [], char entradaCodificadora []);
void somarNumerosCaracteresEntrada(int numEntradaCodificar[],int numEntradaCodificadora[],int tamNumEntradaCodificar,int tamNumEntradaCodificadora);
void gerarNumerosString(int numSoma[],int tamNumSoma);
void gerarCodificacaoNumerosString(char code[]);
void gerarStringNumerosEntradaCodificada(char entradaCodificada[],char entradaCodificadora[]);
void converteStringNumerosPalavraCodificada(char valueNum[],char entradaCodificadora[]);
void gerarNumerosCaracteresEntradaCodificadora(char entradaCodificadora[],int inteiros[],int tamInteiros);
void subtracaoNumerosEntradaCodificarDecodificar(int inteiros[],int tamInteiros,int numEntradaCodificadora[],int tamNumEntradaCodificadora);
void modificaSinalNegativo(int subtracao[],int tamSubtracao);
void gerarCaracteresNumericosEntradaCodificar(int numeros[],int tamSubtracao);

#endif
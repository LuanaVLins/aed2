#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void entrada(int *num01, int *num02, int *num03) {
    printf("\nQuestao 01 ******************************************************************************************\n");
    printf("\nDigite o primeiro numero: ");
    scanf("%d", num01);
    printf("\nDigite o segundo numero: ");
    scanf("%d", num02);
    printf("\nDigite o terceiro numero: ");
    scanf("%d", num03);

}

void processamento(int *num01, int *num02, int *num03, int *saida) {
    *saida = *num01 + *num02 + *num03;

}

void saida(int saida) {
    printf("\nResultado da soma: %d \n", saida);

}

void questao01(void) {

    int numero01, numero02, numero03, resultadoSoma;

    entrada(&numero01, &numero02, &numero03);

    processamento(&numero01, &numero02, &numero03, &resultadoSoma);

    saida(resultadoSoma);

}

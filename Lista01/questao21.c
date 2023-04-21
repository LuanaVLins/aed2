#include <stdio.h>
#include <stdlib.h>
#include "questao21.h"

void entradaQuestao21(int *num01, int *num02, int *num03) {
    printf("\nQuestao 21 ******************************************************************************************\n");
    printf("\nDigite o primeiro número: ");
    scanf("%d", num01);
    printf("\nDigite o segundo número: ");
    scanf("%d", num02);
    printf("\nDigite o terceiro número: ");
    scanf("%d", num03);
}

void processamentoQuestao21(int *num01, int *num02, int *num03, int *resultado) {
    if (*num01 > *num02) {
        *resultado = *num01;
        *num01 = *num02;
        *num02 = *resultado;
    }

    if (*num01 > *num03) {
        *resultado = *num01;
        *num01 = *num03;
        *num03 = *resultado;
    }

    if (*num02 > *num03) {
        *resultado = *num02;
        *num02 = *num03;
        *num03 = *resultado;
    }
}

void saidaQuestao21(int num1, int num2, int num3) {
    printf("\nNúmeros em ordem crescente: %d, %d, %d\n", num1, num2, num3);
}

void questao21(void) {
    int num1, num2, num3, resultado;

    entradaQuestao21(&num1, &num2, &num3);

    processamentoQuestao21(&num1, &num2, &num3, &resultado);

    saidaQuestao21(num1, num2, num3);

}



#include <stdio.h>
#include <stdlib.h>
#include "questao20.h"

void entradaQuestao20(int *num01, int *num02, int *num03) {
    printf("\nQuestao 20 ******************************************************************************************\n");
    printf("\nDigite o primeiro número: ");
    scanf("%d", num01);
    printf("\nDigite o segundo número: ");
    scanf("%d", num02);
    printf("\nDigite o terceiro número: ");
    scanf("%d", num03);
}

void processamentoQuestao20(int *num01, int *num02, int *num03, char *resultado) {
    if (*num03 == *num01 && *num03 == *num02) {
        *resultado = '1';
    } else if (*num02 >= *num01 && *num02 >= *num03) {
        *resultado = '2';
    } else if (*num03 >= *num01 && *num03 >= *num02) {
        *resultado = '3';
    } else if (*num01 >= *num02 && *num01 >= *num03) {
        *resultado = '4';
    }
}

void saidaQuestao20(char resultado, int num1, int num2, int num3) {
    if(resultado == '1'){
       printf("\nOs números são idênticos. \n");
    } else if (resultado == '2') {
        printf("\nMaior número digitado: %d \n", num2);
    } else if (resultado == '3') {
        printf("\nMaior número digitado: %d \n", num3);
    } else if (resultado == '4') {
        printf("\nMaior número digitado: %d \n", num1);
    }
}

void questao20(void) {
    int num1, num2, num3;
    char resultado;

    entradaQuestao20(&num1, &num2, &num3);

    processamentoQuestao20(&num1, &num2, &num3, &resultado);

    saidaQuestao20(resultado, num1, num2, num3);

}



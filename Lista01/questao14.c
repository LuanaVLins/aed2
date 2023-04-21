#include <stdio.h>
#include <stdlib.h>
#include "questao14.h"

void entradaQuestao14(int *numero) {
    printf("\nQuestao 14 ******************************************************************************************\n");
    printf("\nDigite o numero: ");
    scanf("%d", numero);
}

int processamentoQuestao14(int *numero) {
    if (*numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

void saidaQuestao14(int resultado) {
    if(resultado){
        printf("\nO numero digitado é par.\n");
    } else {
        printf("\nO numero digitado é ímpar.\n");
    }

}

void questao14(void) {
    int numero, resultado;

    entradaQuestao14(&numero);

    resultado = processamentoQuestao14(&numero);

    saidaQuestao14(resultado);

}



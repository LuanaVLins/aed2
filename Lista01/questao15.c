#include <stdio.h>
#include <stdlib.h>
#include "questao15.h"

void entradaQuestao15(int *num1, int *num2) {
    printf("\nQuestao 15 ******************************************************************************************\n");
    printf("\nDigite o primeiro numero: ");
    scanf("%d", num1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", num2);
}

int processamentoQuestao15(int *num1, int *num2) {
    if (*num1 > *num2) {
        return 1;
    } else {
        return 0;
    }
}

void saidaQuestao15(int resultado) {
    if(resultado){
        printf("\nO primeiro numero digitado é o maior.\n");
    } else {
        printf("\nO segundo numero digitado é o maior.\n");
    }

}

void questao15(void) {
    int numero01, numero02, resultado;

    entradaQuestao15(&numero01, &numero02);

    resultado = processamentoQuestao15(&numero01, &numero02);

    saidaQuestao15(resultado);

}



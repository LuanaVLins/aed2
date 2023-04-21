#include <stdio.h>
#include <stdlib.h>
#include "questao13.h"

void entradaQuestao13(int *numero) {
    printf("\nQuestao 13 ******************************************************************************************\n");
    printf("\nDigite o numero: ");
    scanf("%d", numero);

}

int processamentoQuestao13(int *numero) {
    if (*numero % 5 == 0 && *numero != 0) {
        return 1;
    } else {
        return 0;
    }
}

void saidaQuestao13(int resultado) {
    if(resultado){
         printf("\nO numero digitado é divisivel por 5.\n");
    } else {
        printf("\nO numero digitado não é divisivel por 5.\n");
    }

}

void questao13(void) {

    int numero, resultado;

    entradaQuestao13(&numero);

    resultado = processamentoQuestao13(&numero);

    saidaQuestao13(resultado);

}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao11.h"

void entradaQuestao11(int *numero) {
    printf("\nQuestao 11 ******************************************************************************************\n");
    printf("\nDigite o numero: ");
    scanf("%d", numero);
}

int processamentoQuestao11(int *numero) {
    if (*numero >= 100 && *numero <= 500) {
        return 1;
    } else {
        return  0;
    }
}

void saidaQuestao11(int resultado) {
    if(resultado){
          printf("\nO numero digitado esta entre 100 e 500.\n");
    }

}

void questao11(void) {
    int numero, resultado;

    entradaQuestao11(&numero);

    resultado = processamentoQuestao11(&numero);

    saidaQuestao11(resultado);

}



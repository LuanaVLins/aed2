#include <stdio.h>
#include <stdlib.h>
#include "questao09.h"

void entradaQuestao09(int *num) {
    printf("\nQuestao 09 ******************************************************************************************\n");
    printf("\nDigite um numero: ");
    scanf("%d", num);
}

int processamentoQuestao09(int *num) {
    if(*num > 100){
        return 1;
    } else {
        return 0;
    }
}


void saidaQuestao09(int resultado) {

    if(resultado){
         printf("\nO numero é digitado é maior que 100!\n");
    }
}


void questao09(void) {
    int numero, resultado;

    entradaQuestao09(&numero);

    resultado = processamentoQuestao09(&numero);

    saidaQuestao09(resultado);
}

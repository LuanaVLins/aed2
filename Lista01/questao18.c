#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

void entradaQuestao18(float *media01, float *media02) {
    printf("\nQuestao 18 ******************************************************************************************\n");
    printf("\nDigite a média da Unidade 1: ");
    scanf("%f", media01);
    printf("\nDigite a média da Unidade 2: ");
    scanf("%f", media02);
}

void processamentoQuestao18(float *mediaUnidade1, float *mediaUnidade2, float *mediaFinal, char *resultado) {
    *mediaFinal = (*mediaUnidade1 + *mediaUnidade2) / 2;
    if (*mediaFinal >= 7) {
        *resultado = 'A';
    } else if (*mediaFinal < 3) {
        *resultado = 'R';
    } else {
        *resultado = 'P';
    }
}

void saidaQuestao18(char resultado, float mediaFinal) {
    printf("\nMedia final: %.1f \n", mediaFinal);
    if(resultado == 'A'){
        printf("\nAprovado.\n");
    } else if (resultado == 'R') {
        printf("\nReprovado.\n");
    } else if (resultado == 'P'){
        printf("\nProva Final. \n");
    }

}

void questao18(void) {
    float mediaUnidade1, mediaUnidade2, mediaFinal;
    char resultado;

    entradaQuestao18(&mediaUnidade1, &mediaUnidade2);

    processamentoQuestao18(&mediaUnidade1, &mediaUnidade2, &mediaFinal, &resultado);

    saidaQuestao18(resultado,mediaFinal);

}



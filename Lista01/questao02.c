#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void entradaQuestao02(float *num01, float *num02, float *num03, float *num04) {
    printf("\nQuestao 02 ******************************************************************************************\n");
    printf("\nDigite o primeiro numero: ");
    scanf("%f", num01);
    printf("\nDigite o segundo numero: ");
    scanf("%f", num02);
    printf("\nDigite o terceiro numero: ");
    scanf("%f", num03);
    printf("\nDigite o quarto numero: ");
    scanf("%f", num04);
}

void processamentoQuestao02(float *num01, float *num02, float *num03, float *num04, float *media) {
    *media = (*num01 + *num02 + *num03 + *num04) / 4;

}

void saidaQuestao02(float saidaQuestao02) {
    printf("\nMedia dos 4 numeros: %.2f\n", saidaQuestao02);

}

void questao02(void) {

    float numero01, numero02, numero03, numero04, media;

    entradaQuestao02(&numero01, &numero02, &numero03, &numero04);

    processamentoQuestao02(&numero01, &numero02, &numero03, &numero04, &media);

    saidaQuestao02(media);
}

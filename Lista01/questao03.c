#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"

void entradaQuestao03(float *nota1, float *peso1, float *nota2 , float *peso2) {
    printf("\nQuestao 03 ******************************************************************************************\n");
    printf("\nDigite a primeira nota: ");
    scanf("%f", nota1);
    printf("\nDigite o peso da primeira nota: ");
    scanf("%f", peso1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", nota2);
    printf("\nDigite o peso da segunda nota: ");
    scanf("%f", peso2);
}

void processamentoQuestao03 (float *nota1, float *peso1, float *nota2, float *peso2, float *mediaPonderada) {
    *mediaPonderada = (*nota1 * *peso1 + *nota2 * *peso2) / (*peso1 + *peso2);
}

void saidaQuestao03(float saidaQuestao03) {
    printf("\nMedia ponderada das notas: %.2f \n", saidaQuestao03);
}

void questao03(void) {

    float nota01, nota02, peso01, peso02, mediaPonderada;

    entradaQuestao03(&nota01, &peso01, &nota02, &peso02);

    processamentoQuestao03(&nota01, &peso01, &nota02, &peso02, &mediaPonderada);

    saidaQuestao03(mediaPonderada);

}

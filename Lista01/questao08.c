#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"

void entradaQuestao08(int *velocidadeVeiculo) {
    printf("\nQuestao 08 ******************************************************************************************\n");
    printf("\nDigite a velocidade em Km/h: ");
    scanf("%d", velocidadeVeiculo);
}

void processamentoQuestao08(int *velocidadeVeiculo, float *convMetrosPSeg) {
    *convMetrosPSeg = *velocidadeVeiculo / 3.6;

}

void saidaQuestao08(float saidaQuestao08){
    printf("\nVelocidade convertida: %f m/s\n", saidaQuestao08);
}

void questao08(void) {
    int velocidade;
    float convMetrosPSeg;

    entradaQuestao08(&velocidade);

    processamentoQuestao08(&velocidade, &convMetrosPSeg);

    saidaQuestao08(convMetrosPSeg);
}

#include <stdio.h>
#include <stdlib.h>
#include "questao04.h"

void entradaQuestao04(float *salarioIni, int *porcentAumento) {
    printf("\nQuestao 04 ******************************************************************************************\n");
    printf("\nDigite o valor do salario atual: ");
    scanf("%f", salarioIni);
    printf("\nDigite a porcentagem de aumento: ");
    scanf("%d", porcentAumento);
}

void processamentoQuestao04(float *salarioIni, int *porcentAumento, float *novoSalario) {
    *novoSalario = *salarioIni + (*salarioIni * *porcentAumento / 100);
}

void saidaQuestao04(float saidaQuestao04) {
    printf("\nValor novo salario R$ %.4f\n", saidaQuestao04);
}


void questao04(void) {
    float salarioInicial, novoSalario;
    int porcentagemAumento;

    entradaQuestao04(&salarioInicial, &porcentagemAumento);

    processamentoQuestao04(&salarioInicial, &porcentagemAumento, &novoSalario);

    saidaQuestao04(novoSalario);
}

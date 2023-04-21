#include <stdio.h>
#include <stdlib.h>
#include "questao06.h"

void entradaQuestao06(float *antigoValor, float *valorNovo) {
    printf("\nQuestao 06 ******************************************************************************************\n");
    printf("\nDigite o valor antigo do produto: ");
    scanf("%f", antigoValor);
    printf("\nDigite o novo valor do produto: ");
    scanf("%f", valorNovo);
}

int processamentoQuestao06(float *antigoValor, float *valorNovo, float *porcentagemAumento){
    if (*valorNovo != *antigoValor) {
        *porcentagemAumento = (*valorNovo - *antigoValor) / *antigoValor * 100;
        return 1;
    } else {
        return 0;
    }
}

void saidaQuestao06(float saidaQuestao06, int resultado){
    if(resultado) {
        printf("\nO produto teve %.2f %% de aumento. \n", saidaQuestao06);
    } else {
        printf("\nO produto não teve aumento. \n", saidaQuestao06);
    }

}

void questao06(void) {
    float valorAntigo, novoValor, porcentagemAumento;

    entradaQuestao06(&valorAntigo, &novoValor);

    int resultado = processamentoQuestao06(&valorAntigo, &novoValor, &porcentagemAumento);

    saidaQuestao06(porcentagemAumento, resultado);

}


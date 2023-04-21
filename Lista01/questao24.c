#include <stdio.h>
#include <stdlib.h>
#include "questao24.h"

void entradaQuestao24(float *valorDaCompra, float *valorDoPagamento) {
    printf("\nQuestao 24 ******************************************************************************************\n");
    printf("\nDigite o valor da compra: ");
    scanf("%f", valorDaCompra);
    printf("\nDigite o valor do pagamento efetuado: ");
    scanf("%f", valorDoPagamento);
}

int processamentoQuestao24(float *valorDoPagamento, float *valorDaCompra, int *notas100, int *notas10, int *notas1) {
    if (*valorDoPagamento >= *valorDaCompra) {
        int troco = *valorDoPagamento - *valorDaCompra;
        *notas100 = troco / 100;
        troco = troco % 100;
        *notas10 = troco / 10;
        troco = troco % 10;
        *notas1 = troco;
        return 1;
    } else {
        return 0;
    }
}

void saidaQuestao24(int resultado, float valorDoPagamento, float valorDaCompra, int notas100, int notas10, int notas1) {
    if (resultado) {
        printf("\nTroco: %.2f\n", valorDoPagamento - valorDaCompra);
        printf("\nNotas de 100: %d\n", notas100);
        printf("\nNotas de 10: %d\n", notas10);
        printf("\nNotas de 1: %d\n", notas1);
    } else {
        printf("\nPagamento Negado!\n");
    }
}

void questao24(void) {
    float valorCompra, valorPagamento;
    int notas100, notas10, notas1, resultado;

    entradaQuestao24(&valorCompra, &valorPagamento);

    resultado = processamentoQuestao24(&valorPagamento, &valorCompra, &notas100, &notas10, &notas1);

    saidaQuestao24(resultado, valorPagamento, valorCompra, notas100, notas10, notas1);
}





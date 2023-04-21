#include <stdio.h>
#include <stdlib.h>
#include "questao17.h"

void entradaQuestao17(float *valorCompra) {
    printf("\nQuestao 17 ******************************************************************************************\n");
    printf("\nDigite o valor da compra do produto: ");
    scanf("%f", valorCompra);
}

int processamentoQuestao17(float *valorCompra, float *valorVenda) {
    if (*valorCompra < 200) {
        *valorVenda = *valorCompra + (*valorCompra * 50 / 100);
        return 1;
    } else {
        *valorVenda = *valorCompra + (*valorCompra * 30 / 100);
        return 0;
    }
}

void saidaQuestao17(int resultado, float valorVenda) {
    if(resultado){
        printf("\nPreço para venda do produto: R$ %.2f \n", valorVenda);
    } else {
        printf("\nPreço para venda do produto: R$ %.2f   \n", valorVenda);
    }
}

void questao17(void) {
    float valorDaCompra, valorDaVenda;
    int resultado;

    entradaQuestao17(&valorDaCompra);

    resultado = processamentoQuestao17(&valorDaCompra, &valorDaVenda);

    saidaQuestao17(resultado,valorDaVenda);

}



#include <stdio.h>
#include <stdlib.h>
#include "questao16.h"

void entradaQuestao16(float *salario) {
    printf("\nQuestao 16 ******************************************************************************************\n");
    printf("\nDigite o salario: ");
    scanf("%f", salario);

}

int processamentoQuestao16(float *salarioB, float *salarioLiquido) {

    if (*salarioB < 2000) {
       *salarioLiquido = *salarioB - (*salarioB * 10 / 100);
        return 1;
    } else {
       *salarioLiquido = *salarioB - (*salarioB * 20 / 100);
        return 0;
    }
}

void saidaQuestao16(int resultado, float salarioLiquido) {

    if(resultado){
        printf("\nSalário Líquido com 10 %% de desconto: %.2f \n", salarioLiquido);
    } else {
        printf("\nSalario Líquido com 20 %% de desconto: %.2f \n", salarioLiquido);
    }
}

void questao16(void) {
    float salarioBruto, salarioLiquido;
    int resultado;

    entradaQuestao16(&salarioBruto);

    resultado = processamentoQuestao16(&salarioBruto, &salarioLiquido);

    saidaQuestao16(resultado, salarioLiquido);

}



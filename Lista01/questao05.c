#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void entradaQuestao05(float *salario, int *quantidadeDependentes) {
    printf("\nQuestao 05 ******************************************************************************************\n");
    printf("\nDigite o salário base: ");
    scanf("%f", salario);
    printf("\nDigite a quantidade de dependentes: ");
    scanf("%d", quantidadeDependentes);
}

void processamentoQuestao05(float *salario, float *salarioBruto, int *quantidadeDependentes){
    *salarioBruto = *salario + (*quantidadeDependentes * 32);
    *salarioBruto = *salarioBruto - (*salarioBruto * 27.5 /100);
}

void saidaQuestao05(float saidaQuestao05){
    printf("\nValor do salário após desconto do imposto de renda e adicional por dependente: R$ %.2f\n", saidaQuestao05);
}

void questao05(void) {
    float salarioBase, salarioBruto;
    int dependentes;

    entradaQuestao05(&salarioBase, &dependentes);

    processamentoQuestao05(&salarioBase, &salarioBruto, &dependentes);

    saidaQuestao05(salarioBruto);

}



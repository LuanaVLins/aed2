#include <stdio.h>
#include <stdlib.h>
#include "questao23.h"

void entradaQuestao23(float *percurso, char *tipoCarro) {
    printf("\nQuestao 23 ******************************************************************************************\n");
    printf("\nDigite o percurso em quilômetros: ");
    scanf("%f", percurso);
    printf("\nDigite o tipo do carro (A, B ou C): ");
    scanf(" %c", tipoCarro);
}

void processamentoQuestao23(float percurso, char tipoCarro, float *consumo) {
   switch (tipoCarro) {
        case 'A':
            *consumo = percurso / 8;
            break;
        case 'B':
            *consumo = percurso / 9;
            break;
        case 'C':
            *consumo = percurso / 12;
            break;
        default:
            printf("\nTipo de carro inválido!\n");
            break;
    }
}

void saidaQuestao23(float percurso, char tipoCarro, float consumo) {
    if (tipoCarro == 'A' || tipoCarro == 'B' || tipoCarro == 'C') {
        printf("\nPara percorrer %.2f quilômetros com o carro tipo %c, será necessário %.2f litros de gasolina.\n", percurso, tipoCarro, consumo);
    }
}

void questao23(void) {
    float percurso, consumo;
    char tipoCarro;

    entradaQuestao23(&percurso, &tipoCarro);

    processamentoQuestao23(percurso, tipoCarro, &consumo);

    saidaQuestao23(percurso, tipoCarro, consumo);
}




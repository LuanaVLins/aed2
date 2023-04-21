#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao12.h"

void entradaQuestao12(float *nota1, float *nota2) {
    printf("\nQuestao 12 ******************************************************************************************\n");
    printf("\nDigite a primeira nota: ");
    scanf("%f", nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", nota2);
}

int processamentoQuestao12(float *nota1, float *nota2, float *media) {

    *media = (*nota1 + *nota2)/ 2;

    if (*media >= 7) {
        return 1;
    } else {
        return 0;
    }
}

void saidaQuestao12(int resultado) {

    if(resultado){
         printf("\nO aluno foi aprovado.\n");
    } else {
         printf("\nO aluno foi reprovado.\n");
    }

}

void questao12(void) {
    float nota01, nota02, media;
    int resultado;

    entradaQuestao12(&nota01, &nota02);

    resultado = processamentoQuestao12(&nota01, &nota02, &media);

    saidaQuestao12(resultado);

}



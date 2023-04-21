#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"

void entradaQuestao19(int *lado1, int *lado2, int *lado3) {
    printf("\nQuestao 19 ******************************************************************************************\n");
    printf("\nDigite o tamanho do primeiro lado do tri�ngulo: ");
    scanf("%d", lado1);
    printf("\nDigite o tamanho do segundo lado do tri�ngulo: ");
    scanf("%d", lado2);
    printf("\nDigite o tamanho do terceiro lado do tri�ngulo: ");
    scanf("%d", lado3);
}

void processamentoQuestao19(int *lado1, int *lado2, int *lado3, char *resultado) {
    if (*lado1 == *lado2 && *lado2 == *lado3) {
        *resultado = 'E';
    } else if (*lado1 == *lado2 || *lado1 == *lado3 || *lado2 == *lado3) {
        *resultado = 'I';
    } else {
        *resultado = 'S';
    }
}

void saidaQuestao19(char resultado) {
    if(resultado == 'E'){
        printf("\nTri�ngulo Equil�tero.\n");
    } else if (resultado == 'I') {
        printf("\nTri�ngulo Is�sceles. \n");
    } else if (resultado == 'S'){
        printf("\nTri�ngulo Escaleno. \n");
    }
}

void questao19(void) {
    int lado1, lado2, lado3;
    char resultado;

    entradaQuestao19(&lado1, &lado2, &lado3);

    processamentoQuestao19(&lado1, &lado2, &lado3, &resultado);

    saidaQuestao19(resultado);

}



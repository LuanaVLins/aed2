#include <stdio.h>
#include <stdlib.h>
#include "questao22.h"

void entradaQuestao22(char **nomeMunicipio, int *qtdEleitores, int *numerosMaisVotado) {
    printf("\nQuestao 22 ******************************************************************************************\n");
    printf("\nDigite o nome do município: ");
    scanf("%s", nomeMunicipio);
    printf("\nDigite a quantidade de eleitores do município: ");
    scanf("%d", qtdEleitores);
    printf("\nDigite o  o número de votos do candidato mais votado: ");
    scanf("%d", numerosMaisVotado);
}

int processamentoQuestao22(int *qtdEleitores, int *numerosMaisVotado) {
     if (*qtdEleitores > 200000 && *numerosMaisVotado <= (*qtdEleitores * 50 / 100)) {
        return 1;
    } else {
        return 0;
    }
}

void saidaQuestao22(int resultado, char **nomeMunicipio) {
    if(resultado) {
         printf("\nHaverá segundo turno na eleição municipal de %s.\n", nomeMunicipio);
    } else {
         printf("\nNão haverá segundo turno na eleição municipal de %s.\n", nomeMunicipio);
    }
}

void questao22(void) {
    int qtdEleitores, numerosMaisVotado, resultado;
    char nomeMunicipio[12];

    entradaQuestao22(nomeMunicipio, &qtdEleitores, &numerosMaisVotado);

    resultado = processamentoQuestao22(&qtdEleitores, &numerosMaisVotado);

    saidaQuestao22(resultado, nomeMunicipio);

}



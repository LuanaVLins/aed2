#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "questao07.h"

void entradaQuestao07(float *tamanhoRaio) {
    printf("\nQuestao 07 ******************************************************************************************\n");
    printf("\nDigite o tamanho do raio do círculo: ");
    scanf("%f", tamanhoRaio);
}

void processamentoQuestao07(float *tamanhoRaio, float *diametro, float *perimentro, float *area, float *volume) {
    *diametro = 2 * *tamanhoRaio;
    *perimentro = 2 * 3.14 * *tamanhoRaio;
    *area = 3.14 * pow(*tamanhoRaio, 2);
    *volume = 4 * 3.14 * pow(*tamanhoRaio, 3) / 3 ;

}


void saidaQuesta07(float diamentro, float perimetro, float area, float volume) {
    printf("\nDiâmetro do circulo: %f   \n", diamentro);
    printf("\nPerímentro do circulo: %f \n", perimetro);
    printf("\nÁrea do círculo: %f       \n", area);
    printf("\nVolume do círculo: %f     \n", volume);

}


void questao07(void) {
    float raioCirculo, diamentroCiculo, perimetroCirculo, areaCirculo, volumeEsfera;

    entradaQuestao07(&raioCirculo);

    processamentoQuestao07(&raioCirculo, &diamentroCiculo, &perimetroCirculo, &areaCirculo, &volumeEsfera);

    saidaQuesta07(diamentroCiculo, perimetroCirculo, areaCirculo, volumeEsfera );

}

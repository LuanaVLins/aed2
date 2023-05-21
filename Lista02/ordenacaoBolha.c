#include <stdio.h>
#include "ordenacaoBolha.h"

void entradaBolha(int *arr, int *tam) {
    int temp[] = {177, 350 , 35 , 2, 270 , 346 , 176 , 39  ,214 , 121};
    *tam = sizeof(temp) / sizeof(temp[0]);
    for (int i = 0; i < *tam; i++) {
        arr[i] = temp[i];
    }
}

void processamentoBolha(int *arr, int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void saidaBolha(int *arr, int tam) {
    printf("\n******************************************************************************************\n");
    printf("Array ordenado por Bubble Sort: \n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n******************************************************************************************\n");
}


void ordenacaoBolha(void) {
    int array[10];
    int tamanho;

    entradaBolha(array, &tamanho);
    processamentoBolha(array, tamanho);
    saidaBolha(array, tamanho);

    return 0;
}


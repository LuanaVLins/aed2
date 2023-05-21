#include <stdio.h>
#include "ordenacaoInsercao.h"

void entradaInsercao(int *arr, int *tam) {
    int temp[] = {177, 350 , 35 , 2, 270 , 346 , 176 , 39  ,214 , 121};
    *tam= sizeof(temp) / sizeof(temp[0]);
    for (int i = 0; i < *tam; i++) {
        arr[i] = temp[i];
    }
}

void processamentoInsercao(int *arr, int tam) {
    int i, key, j;
    for (i = 1; i < tam; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void saidaInsercao(int *arr, int tam) {
    printf("Array ordenado por Insertion Sort: \n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n******************************************************************************************\n");
}

void ordenacaoInsercao(void) {
    int array[10];
    int tamanho;

    entradaInsercao(array, &tamanho);
    processamentoInsercao(array, tamanho);
    saidaInsercao(array, tamanho);

    return 0;
}

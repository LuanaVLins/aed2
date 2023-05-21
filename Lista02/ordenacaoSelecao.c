#include <stdio.h>
#include "ordenacaoSelecao.h"

void entradaSelecao(int *arr, int *tam) {
    int temp[] = {177, 350 , 35 , 2, 270 , 346 , 176 , 39  ,214 , 121};
    *tam = sizeof(temp) / sizeof(temp[0]);
    for (int i = 0; i < *tam; i++) {
        arr[i] = temp[i];
    }
}

void processamentoSelecao(int *arr, int tam) {
    int i, j, minIndex, temp;
    for (i = 0; i <  tam - 1; i++) {
        minIndex = i;
        for (j = i+1; j < tam; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void saidaSelecao(int *arr, int tam) {
    printf("Array ordenado por Selection Sort: \n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n******************************************************************************************\n");
}

void ordenacaoSelecao(void) {
    int array[10];
    int tamanho;

    entradaSelecao(array, &tamanho);
    processamentoSelecao(array, tamanho);
    saidaSelecao(array, tamanho);

    return 0;
}

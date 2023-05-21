#include <stdio.h>
#include "ordenacaoMergesort.h"

void entradaMergesort(int *arr, int *tam) {
    int temp[] = {177, 350, 35, 2, 270, 346, 176, 39, 214, 121};
    *tam = sizeof(temp) / sizeof(temp[0]);
    for (int i = 0; i < *tam; i++) {
        arr[i] = temp[i];
    }
}

void merge(int *arr, int esquerda, int meio, int direita) {
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[esquerda + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[meio + 1 + j];
    }

    int i = 0, j = 0, k = esquerda;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }

    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void processamentoMergesort(int *arr, int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        processamentoMergesort(arr, esquerda, meio);
        processamentoMergesort(arr, meio + 1, direita);
        merge(arr, esquerda, meio, direita);
    }
}

void saidaMergesort(int *arr, int tam) {
    printf("Array ordenado pelo Mergesort: \n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n******************************************************************************************\n");
}

void ordenacaoMergesort(void) {
    int array[10];
    int tamanho;

    entradaMergesort(array, &tamanho);
    processamentoMergesort(array, 0, tamanho - 1);
    saidaMergesort(array, tamanho);

    return 0;
}

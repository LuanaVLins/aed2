#include <stdio.h>

void entradaQuicksort(int *arr, int *tam) {
    int temp[] = {177, 350, 35, 2, 270, 346, 176, 39, 214, 121};
    *tam = sizeof(temp) / sizeof(temp[0]);
    for (int i = 0; i < *tam; i++) {
        arr[i] = temp[i];
    }
}

int particao(int *arr, int menor, int maior) {
    int pivot = arr[maior];
    int i = menor - 1;

    for (int j = menor; j <= maior - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[maior];
    arr[maior] = temp;

    return i + 1;
}

void processamentoQuicksort(int *arr, int menor, int maior) {
    if (menor < maior) {
        int pi = particao(arr, menor, maior);

        processamentoQuicksort(arr, menor, pi - 1);
        processamentoQuicksort(arr, pi + 1, maior);
    }
}

void saidaQuick(int *arr, int tam) {
    printf("Array ordenado pelo Quicksort: \n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n******************************************************************************************\n");
}

void ordenacaoQuicksort(void) {
    int array[10];
    int tamanho;

    entradaQuicksort(array, &tamanho);
    processamentoQuicksort(array, 0, tamanho - 1);
    saidaQuick(array, tamanho);

    return 0;
}

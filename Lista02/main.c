#include <stdio.h>
#include <stdlib.h>
#include "ordenacaoBolha.h"
#include "ordenacaoInsercao.h"
#include "ordenacaoSelecao.h"
#include "ordenacaoMergesort.h"
#include "ordenacaoQuicksort.h"

int main()
{
    printf("\nArray desordenado: 177, 350 , 35 , 2, 270 , 346 , 176 , 39  ,214 , 121 \n");
    ordenacaoBolha();
    ordenacaoInsercao();
    ordenacaoSelecao();
    ordenacaoMergesort();
    ordenacaoQuicksort();

    return 0;
}

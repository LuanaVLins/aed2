#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "questao10.h"

void entradaQuestao10(char *senhaDigitada) {
    printf("\nQuestao 10 ******************************************************************************************\n");
    printf("\nDigite a senha: ");
    scanf("%s", senhaDigitada);
}

int processamentoQuestao10(char *senhaDigitada) {
    for (int i = 0; senhaDigitada[i]; i++) {
        senhaDigitada[i] = toupper(senhaDigitada[i]);
    }
    if (strcmp(senhaDigitada, "LINGUAGEMC") == 0) {
        return 1;
    } else {
        return  0;
    }
}

void saidaQuestao10(int resultado) {
    if(resultado){
          printf("\nSenha válida.\n");
    } else {
         printf("\nSenha inválida.\n");
    }
}

void questao10(void) {
    char senha[10];
    int resultado;

    entradaQuestao10(senha);

    resultado = processamentoQuestao10(senha);

    saidaQuestao10(resultado);

}



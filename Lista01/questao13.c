#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"questao13.h"

void entradaQ13(int *num) {
    printf("\nDigite um numero: ");
    scanf("%d", num);
}

void processamentoQ13(int *num, int *mod, bool *div) {
    *mod = *num % 5;

    if (*mod == 0) {
        *div = true;
    } else {
        *div = false;
    }
}

void saidaQ13(int num, bool div) {
    system("cls");

    if (div == true) {
        printf("\nO numero %d eh divisivel por 5", num);
    } else {
        printf("\nO numero %d nao eh divisivel por 5", num);
    }
}
void questao13(void) {
    int numero, mod;
    bool div;

    entradaQ13(&numero);
    processamentoQ13(&numero, &mod, &div);
    saidaQ13(numero, div);
}

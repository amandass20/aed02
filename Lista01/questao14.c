#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"questao14.h"

void entradaQ14(int *num) {
    printf("\nDigite um numero: ");
    scanf("%d", num);
}

void processamentoQ14(int *num, int *mod, bool *par) {
    *mod = *num % 2;

    if (*mod == 0) {
        *par = true;
    } else {
        *par = false;
    }
}

void saidaQ14(int num, bool par) {
    if (par == true) {
        printf("\nO numero %d eh par", num);
    } else {
        printf("\nO numero %d eh impar", num);
    }
}

void questao14(void) {
    int num, mod;
    bool par;

    entradaQ14(&num);
    processamentoQ14(&num, &mod, &par);
    saidaQ14(num, par);
}

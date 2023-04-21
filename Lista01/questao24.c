#include <stdio.h>
#include <stdlib.h>
#include "questao24.h"

void entradaQ24(float *valorC, float *valorP){
    printf("\nDigite o valor da compra: ");
    scanf("%f", valorC);
    printf("\nDigite o valor do pagamento: ");
    scanf("%f", valorP);
}

void processamentoQ24(float *valorC, float *valorP, int *nota100, int *nota10, int *nota1, float *troco){
    *troco = *valorP - *valorC;

    if(*troco < 0){
        printf("Pagamento negado\n");
    } else {
        *nota100 = *troco / 100;
        int resto = (int)*troco % 100;
        *nota10 = resto / 10;
        resto = resto % 10;
        *nota1 = resto;
    }
}

void saidaQ24(int nota100, int nota10, int nota1){
    printf("Numero de notas de 100: %d\n", nota100);
    printf("Numero de notas de 10: %d\n", nota10);
    printf("Numero de notas de 1: %d\n", nota1);
}

void questao24(void){
    float valorCompra, valorPgt, troco;
    int nota100 = 0;
    int nota10 = 0;
    int nota1 = 0;

    entrada(&valorCompra, &valorPgt);
    processamento(&valorCompra, &valorPgt, &nota100, &nota10, &nota1, &troco);
    saida(nota100, nota10, nota1);
}

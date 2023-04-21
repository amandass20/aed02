#include<stdio.h>
#include<stdlib.h>
#include"questao08.h"

void entradaQ08(float *velocidadeKmH) {
    printf("\nInforme a velocidade do veiculo em km/h: ");
    scanf("%f", velocidadeKmH);
}

void processamentoQ08(float *velocidadeKmH, float *velocidadeMs) {
    *velocidadeMs = *velocidadeKmH / 3.6;
}

void saidaQ08(float velocidadeMs) {
    printf("\nConvertida, a velocidade informada fica %.1f", velocidadeMs);
}

void questao08(void) {
    float velocidade_kmH, velocidade_mS;

    entradaQ08(&velocidade_kmH);
    processamentoQ08(&velocidade_kmH, &velocidade_mS);
    saidaQ08(velocidade_mS);
}

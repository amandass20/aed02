#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

void entradaQ18 (float *num1, float *num2) {
		printf("\nInforme a 1 nota:");
		scanf("%f", num1);
        printf("\nInforme a 2 nota:");
        scanf("%f", num2);
}

void processamentoQ18 (float *num1, float *num2, float *saida) {
    *saida = (*num1 + *num2)/2;
}

void saidaQ18 (float saida) {
    printf("Media final: %f \n", saida);
    if (saida >= 7){
        printf("Aprovado");
    } else if (saida < 3){
        printf("Reprovado");
    } else {
        printf("Prova Final");
    }
}

void questao18(void){
    float n1, n2, media;

	entradaQ18(&n1, &n2);

	processamentoQ18(&n1, &n2, &media);

	saidaQ18(media);
}


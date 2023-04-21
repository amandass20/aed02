#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void entradaQ02 (float *num1, float *num2, float *num3, float *num4) {
		printf("\nInforme o 1 numero:");
		scanf("%f", num1);
		printf("Informe o 2 numero:");
		scanf("%f", num2);
		printf("Informe o 3 numero:");
		scanf("%f", num3);
		printf("Informe o 4 numero:");
		scanf("%f", num4);
}

void processamentoQ02 (float *num1, float *num2, float *num3, float *num4, float *saida) {
    *saida = (*num1 + *num2 + *num3 + *num4)/4;
}

void saidaQ02 (float saida) {
    printf("\nMedia: %f", saida);
}

void questao02(void){
    float n1, n2, n3, n4, media;

	entradaQ02(&n1, &n2, &n3, &n4);

	processamentoQ02(&n1, &n2, &n3, &n4, &media);

	saidaQ02((float)media);
}

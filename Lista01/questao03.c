#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"


void entradaQ03 (float *num1, float *peso1, float *num2, float *peso2) {
		printf("\nInforme a primeira nota:");
		scanf("%f", num1);
		printf("Informe peso da primeira nota:");
		scanf("%f", peso1);
		printf("Informe a segunda nota:");
		scanf("%f", num2);
		printf("Informe peso da segunda nota:");
		scanf("%f", peso2);
}

void processamentoQ03 (float *num1, float *peso1, float *num2, float *peso2, float *saida) {
    *saida = (*num1 * *peso1 + *num2 * *peso2)/(*peso1 + *peso2);
}

void saidaQ03 (float saida) {
    printf("\nMedia: %f", saida);
}

void questao03(void){
    float n1, n2, p1, p2, media;

	entradaQ03(&n1, &p1, &n2, &p2);

	processamentoQ03(&n1, &p1, &n2, &p2, &media);

	saidaQ03((float)media);
}

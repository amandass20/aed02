#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"


void entrada (int *num1, int *num2, int *num3) {
		printf("Informe o 1 numero:");
		scanf("%d", num1);
		printf("Informe o 2 numero: ");
		scanf("%d", num2);
		printf("Informe o 3 numero:");
		scanf("%d", num3);
}

	void processamento (int *num1, int *num2, int *num3, int *saida) {
		*saida = (*num1 + *num2 + *num3);
}

	void saida (int saida) {
		printf("Soma: %d", saida);
}

void questao01(void){
    int n1;
	int n2;
	int n3;
	int soma;

	entrada(&n1, &n2, &n3);

	processamento(&n1, &n2, &n3, &soma);

	saida(soma);

}

#include <stdio.h>
#include <stdlib.h>
#include "questao09.h"

void entrada09 (int *num) {
    printf("\nInforme um numero:");
    scanf("%d", num);

}

void processamento09 (int *num) {
	if (*num > 100){
        printf("Esse numero eh maior do que 100\n");
	}
}

void saida09 (int num) {
    printf("\nO numero eh: %d", num);
}

void questao09(void){
    int numero;

	entrada09(&numero);

	processamento09(&numero);

	saida09(numero);

}

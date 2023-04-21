#include <stdio.h>
#include <stdlib.h>
#include "questao20.h"

void entradaQ20(int *n1, int *n2, int *n3){

	printf("\nDigite o primeiro numero: ");
	scanf("%d", n1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", n2);
	printf("\nDigite o terceiro numero: ");
	scanf("%d", n3);
}

void processamentoQ20(int *n1, int *n2, int *n3, int *saida){

	if (*n1 == *n2 && *n2 == *n3){
		*saida = 1;
	} else if(*n1 > *n2 && *n1 > *n3){
		*saida = *n1;
	} else if(*n2 > *n1 && *n2 > *n3){
		*saida = *n2;
	} else{
		*saida = *n3;
	}
}

void saidaQ20(int saida){

	if(saida == 1){
		printf("Numeros identicos");
	}
	else{
		printf("Maior numero: %d\n", saida);
	}
}

void questao20(void){

	int num1, num2, num3, res;

	entradaQ20(&num1, &num2, &num3);
	processamentoQ20(&num1, &num2, &num3, &res);
	saidaQ20(res);
}

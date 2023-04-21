#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include "questao11.h"


void entradaQ11 (int *num) {
    printf("\nInforme um numero:");
    scanf("%d", num);

}

void processamentoQ11 (int *num, bool *situacao) {
	if (*num > 100 && *num <500){
        *situacao = true;
	} else {
	    *situacao = false;
	}

}

void saidaQ11 (bool situacao) {
    if (situacao == true) {
        printf("Esse numero esta entre 100 e 500\n");
    } else {
        printf("Esse numero nao esta entre 100 e 500\n");
    }
}

void questao11(void){
    int numero;
    bool situacao;

	entradaQ11(&numero);
	processamentoQ11(&numero, &situacao);
	saidaQ11(situacao);

}

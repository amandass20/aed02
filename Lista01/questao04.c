#include <stdio.h>
#include <stdlib.h>
#include "questao04.h"

void entradaQ04 (float *salInicial, float *aumento) {
    printf("\nInforme o seu salario inicial:");
    scanf("%f", salInicial);
    printf("\nInforme a porcetagem de aumento:");
    scanf("%f", aumento);

}

void processamentoQ04 (float *salInicial, float *aumento, float *saida) {
    *saida = (*salInicial + (*salInicial * *aumento)/100);
}

void saidaQ04 (float saida) {
    printf("\nO novo salario: %f", saida);
}

void questao04(void){
    float salarioInicial, aum,  nSalario;

	entradaQ04(&salarioInicial, &aum);

	processamentoQ04(&salarioInicial, &aum, &nSalario);

	saidaQ04((float)nSalario);
}

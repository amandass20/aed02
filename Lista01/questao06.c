#include <stdio.h>
#include <stdlib.h>
#include "questao06.h"


void entradaQ06(float *va, float *vn){
    printf("\nInforme o preco do valor antigo: ");
    scanf("%f", va);

    printf("\nInforme o preco do valor novo: ");
    scanf("%f", vn);
}

float processamentoQ06(float *va, float *vn, float *porcAumento){
    *porcAumento = ((*vn - *va)/ *va)*100;
}

void saidaQ06(float porcAumento){
    printf("\nA porcentagem de aumento foi: %.2f %%", porcAumento);
}

void questao06(){
    float valorAntigo, valorNovo, aumPorcentagem;
    entradaQ06(&valorAntigo, &valorNovo);
    processamentoQ06(&valorAntigo, &valorNovo, &aumPorcentagem);
    saidaQ06(aumPorcentagem);
}

#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void entradaQ05(float *sal, float *dep){
    printf("\nInforme o salario base: ");
    scanf("%f", sal);

    printf("\nInforme o numero de dependentes: ");
    scanf("%d", dep);
}

void processamentoQ05(float *sal, float *dep, float *salDep, float *salLiquido){
    *salDep = *sal + (*dep * 32);
    *salLiquido = *salDep - (*salDep * 0.275);
}

void saidaQ05(float salLiquido){
    printf("\nO valor do salario liquido eh: %.2f", salLiquido);
}

void questao05(){
    float salario, salarioLiquido, dependentes, salDependentes;
    entradaQ05(&salario, &dependentes);
    processamentoQ05(&salario, &dependentes, &salDependentes, &salarioLiquido);
    saidaQ05(salarioLiquido);
    return 0;
}

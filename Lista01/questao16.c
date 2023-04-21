#include <stdio.h>
#include <stdlib.h>
#include "questao16.h"

void entradaQ16(float *salBruto){
    printf("\nInforme o seu salario bruto:");
    scanf("%f", salBruto);
}

void processamentoQ16 (float *salBruto, float *salLiquido){
    if (*salBruto < 2000){
        *salLiquido = *salBruto - (*salBruto * 0.1);
    } else {
        *salLiquido = *salBruto - (*salBruto * 0.2);
    }
}

void saidaQ16 (float salLiquido){
    printf("O Salario Liquido eh: %.2f", salLiquido);
}

void questao16(void){
    float salarioBruto, salarioLiquido;

    entradaQ16(&salarioBruto);

    processamentoQ16(&salarioBruto, &salarioLiquido);

    saidaQ16(salarioLiquido);

}

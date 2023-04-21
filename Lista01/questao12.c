#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"questao12.h"

void entradaQ12(float *n1, float *n2) {
    printf("\nDigite a primeira nota: ");
    scanf("%f", n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", n2);
}

void processamentoQ12(float *n1, float *n2, float *media, bool *situacao) {
    *media = (*n1 + *n2)/2.0;

    if (*media >= 7.0) {
        *situacao = true;
    } else {
        *situacao = false;
    }
}

void saidaQ12(bool situacao) {
    if (situacao == true) {
        printf("\nAluno aprovado!");
    } else {
        printf("\nAluno reprovado :(");
    }
}

void questao12(void) {
    float nota1, nota2, media;
    bool situacao;

    entradaQ12(&nota1, &nota2);
    processamentoQ12(&nota1, &nota2, &media, &situacao);
    saidaQ12(situacao);
}

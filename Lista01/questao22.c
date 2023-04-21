#include<stdio.h>
#include<stdlib.h>
#include "questao22.h"

void entradaQ22(char *municipioNome, int *eleitores, int *votos){

    printf("\nInforme o nome do municipio: ");
    gets(municipioNome);
    printf("\nInforme a quantidade de eleitores: ");
    scanf("%d", eleitores);
    printf("\nInforme a quantidade de votos do canditado mais votado : ");
    scanf("%d", votos);
}

void processamentoQ22( int *eleitores, int *votos){
    if(*eleitores > 200000){
        if(*votos < *eleitores/2){
            printf("Vai ter o segundo turno");
        }
        else{
            printf("Não haverá segundo turno");
        }
    }
    else {
        printf("O municipio nao tem eleitores suficientes para ter segundo turno.\n");
    }

}

void questao22(void){
    char municipio[50];
    int qtdEleitores, qtdVotos;

    entradaQ22(&municipio, &qtdEleitores, &qtdVotos);
    processamentoQ22(&qtdEleitores, &qtdVotos);
}

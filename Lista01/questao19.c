#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"

void entradaQ19(int *L1, int *L2, int *L3){
    printf("\nInforme um lado do triangulo:");
    scanf("%d", L1);
    printf("\nInforme outro lado do triangulo:");
    scanf("%d", L2);
    printf("\nInforme outro lado do triangulo:");
    scanf("%d", L3);
}

void processamentoQ19(int *L1, int *L2, int *L3){
    if(*L1 + *L2 > *L3 && *L1 + *L3 > *L2 && *L2 + *L3 > *L1){
        printf("Os 3 lados formam um triangulo!\n");
        if(*L1 == *L2 && *L1 == *L3) {
            printf("Equilatero\n");
        } else {
            if(*L1 == *L2 || *L1 == *L3 || *L2 == *L3) {
                printf("Isosceles\n");
            } else {
                printf("Escaleno\n");
            }
        }
    }
    else{
           printf("Os 3 lados NAO formam um trinagulo!\n");
    }

}


void saidaQ19(){
    printf("Fim!\n");
}

void questao19(void) {
    int lado1, lado2, lado3;

    entradaQ19(&lado1, &lado2, &lado3);
    processamentoQ19(&lado1, &lado2, &lado3);
    saidaQ19();
}




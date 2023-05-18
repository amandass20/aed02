#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define num 10

int selection(){
    system("cls");
    setlocale(LC_ALL, "");

    int vetor[num];
    int i, j, menor, aux;

    printf("\nSELECTION SORT\n\n");
    printf("Entre com dez números para preencher o array, e pressione enter após digitar cada um:\n");
    for (i = 0; i < num; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Lista original: ");
    for(i  =0; i < num; i++) {
        printf("%4d ", vetor[i]);
    }

    for(i = 0; i < num - 1; i++){
        menor = i;
        for(j = i+1; j < num; j++){
            if(vetor[menor] > vetor[j]){
                menor = j;
            }
        }
        if(i != menor){
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }

    printf("\nLista ordenada: ");

    for(i=0; i < num; i++) {
        printf("%4d ", vetor[i]);
    }

    return 0;
}

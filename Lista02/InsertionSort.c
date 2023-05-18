#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 10

int insertion(){
    system("cls");
    setlocale(LC_ALL, "");

    int lista[tam];
    int i, j, aux;

    printf("\nINSERTION SORT\n\n");
    printf("Entre com dez números para preencher o array, e pressione enter após digitar cada um:\n");
    for (i = 0; i < tam; i++){
        scanf("%d", &lista[i]);
    }

    printf("Lista original: ");
    for(i=0; i < tam; i++) {
        printf("%4d ", lista[i]);
    }

    for (i = 0; i < tam - 1; i++){
        if(lista[i] > lista[i+1]) {
            aux = lista[i + 1];
            lista[i+1] = lista[i];
            lista[i] = aux;
            j = i-1;
            while(j>=0){
                if(aux<lista[j]){
                    lista[j+1] = lista[j];
                    lista[j] = aux;
                } else {
                    break;
                }
                j = j-1;
            }
        }
    }

    printf("\nLista ordenada: ");

    for(i=0; i < tam; i++) {
        printf("%4d ", lista[i]);
    }

    system("pause");
    return 0;
}

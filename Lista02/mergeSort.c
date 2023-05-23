#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* criar_vetor(int tamanho) {
    int* vetor2 = (int*)malloc(tamanho * sizeof(int));
    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor2[i]);
    }
    return vetor2;
}

void merge(int vetor[], int esq[], int dir[], int te, int td) { //tamanho esquerdo = te
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < te && j < td) {
        if (esq[i] <= dir[j]) {
            vetor[k] = esq[i];
            i++;
        } else {
            vetor[k] = dir[j];
            j++;
        }
        k++;
    }

    while (i < te) {
        vetor[k] = esq[i];
        i++;
        k++;
    }

    while (j < td) {
        vetor[k] = dir[j];
        j++;
        k++;
    }
}

int* mergeSort(int vetor[], int tamanho){
    if (tamanho < 2) {
        return 0;
    }

    int mid = tamanho / 2;

    int esq[mid];
    int dir[tamanho - mid];
    int i;


    for (i = 0; i < mid; i++) {
        esq[i] = vetor[i];
    }
    for (i = mid; i < tamanho; i++) {
        dir[i - mid] = vetor[i];
    }


    mergeSort(esq, mid);
    mergeSort(dir, tamanho - mid);

    merge(vetor, esq, dir, mid, tamanho - mid);
}

int metodoMS() {
    system("cls");
    setlocale(LC_ALL, "");

    int tamanho;

    printf("\nMERGE SORT\n\n");
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int* vetor = criar_vetor(tamanho);
    int i;

    printf("\nAntes da ordenação:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%4d ", vetor[i]);
    }

    mergeSort(vetor, tamanho);

    printf("\n\nOrdenação MergeSort:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%4d ", vetor[i]);
    }

    system("pause");
    free(vetor);

    return 0;
}

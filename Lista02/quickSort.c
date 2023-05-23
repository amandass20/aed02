#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* vetor_criar(int tamanho) {
    int* vetor2 = (int*)malloc(tamanho * sizeof(int));
    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor2[i]);
    }
    return vetor2;
}

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int vetor[], int baixo, int alto) {
    int pivo = vetor[alto];
    int i = (baixo - 1);

    for (int j = baixo; j <= alto - 1; j++) {

        if (vetor[j] <= pivo) {
            i++;
            trocar(&vetor[i], &vetor[j]);
        }
    }
    trocar(&vetor[i + 1], &vetor[alto]);
    return (i + 1);
}

void quickSort(int vetor[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particionar(vetor, baixo, alto);
        quickSort(vetor, baixo, pi - 1);
        quickSort(vetor, pi + 1, alto);
    }
}


int metodoQS() {
    system("cls");
    setlocale(LC_ALL, "");

    int tamanho;

    printf("\nQUICK SORT\n\n");
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int* vetor = vetor_criar(tamanho);
    int i;

    printf("\n\nAntes da ordenação:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%4d ", vetor[i]);
    }

    quickSort(vetor, 0, tamanho - 1);

    printf("\n\nOrdenação QuickSort:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%4d ", vetor[i]);
    }

    system("pause");
    free(vetor);

    return 0;
}

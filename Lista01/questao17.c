#include <stdio.h>
#include <stdlib.h>
#include "questao17.h"

void entrada17 (float *valorCompra) {
    printf("\nInforme o valor da compra:");
    scanf("%f", valorCompra);
}

void processamento17 (float *valorCompra, float *valorVenda) {
    if (*valorCompra < 200) {
        *valorVenda = *valorCompra + (*valorCompra * 0.5);
    } else {
        *valorVenda = *valorCompra + (*valorCompra * 0.3);
    }
}

void saida17 (float valorVenda) {
    printf("\n O valor da venda foi: %f", valorVenda);
}

void questao17(void){
    float vCompra, vVenda;

	entrada17(&vCompra);

	processamento17(&vCompra, &vVenda);

	saida17(vVenda);

}

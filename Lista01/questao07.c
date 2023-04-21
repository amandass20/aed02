#include<stdio.h>
#include<stdlib.h>
#include"questao07.h"


void entradaQ07(float *raio) {
    printf("\nInforme o raio do circulo em cm: ");
    scanf("%f", raio);
}

void processamentoQ07(float *raio, float *diametro, float *perimetro, float *area, float *volumeEsfera){
    float pi = 3.14;

    *diametro = 2* *raio;
    *perimetro = 2.0 * pi* *raio;
    *area = pi* pow(*raio, 2);

    *volumeEsfera = (4.0/3.0)*pi * pow(*raio, 3);
}

void saidaQ07(float diametro, float perimetro, float area, float volumeEsfera){
    system("cls");

    printf("\nDiametro: %.2f cm", diametro);
    printf("\nPerimetro: %.2f cm", perimetro);
    printf("\nArea: %.2f cm^2", area );
    printf("\nSe esse circulo fosse base para uma esfera, o volume seria: %.2f cm^3", volumeEsfera);
}

void questao07(void) {
    float raio, diametro, perimetro, area, volumeEsfera;

    entradaQ07(&raio);
    processamentoQ07(&raio, &diametro, &perimetro, &area, &volumeEsfera);
    saidaQ07(diametro, perimetro, area, volumeEsfera);
}

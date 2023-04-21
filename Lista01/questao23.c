#include <stdio.h>
#include <stdlib.h>
#include "questao23.h"

void entradaQ23(float *km, char *carro){
	printf("\nDigite o carro: ");
	gets(carro);

	printf("\nDigite os km: ");
	scanf("%f", km);

}
void processamentoQ23(float *km, char *carro,float *saida){

	if(*carro == 'A' || *carro == 'a'){
		*saida = *km/8;
	}
	else if(*carro == 'B'|| *carro == 'b'){

		*saida = *km/9;
	}
	else if(*carro == 'C'|| *carro == 'c'){
		*saida = *km/12;
	}
	else{
		*saida = -1;
	}
}
void saidaQ23(float saida){

	if(saida == -1){
		printf("\nEsse carro é desconhecido");
	}
	else{
		printf("\nA quantidade de gasolina usada eh: %.2f", saida);
	}
}

void questao23(void){

	char car[3];
	float kmetro, res;

	entradaQ23(&car, &kmetro);
	processamentoQ23(&car, &kmetro, &res);
	saidaQ23(res);
}

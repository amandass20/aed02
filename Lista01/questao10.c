#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "questao10.h"

void entradaQ10(char *senha[100]){
    printf("\nDigite a senha: ");
    scanf("%[^\n]", senha);
}

char *processamentoQ10(char senha[100], char senhaPC[100]){
    string_maiusculaQ10(senha);
    senhaPC = "LINGUAGEMC";
    if (strcmp(senhaPC, senha)==0){
        return "VALIDA";
    }
    else{
        return "INVALIDA";
    }
}

void saidaQ10(char texto[100]){
    printf("\nA senha eh %s", texto);
}

void string_maiusculaQ10(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        string[i] = toupper(string[i]);
        i++;
    }
}

void questao10(){
    char senha[100];
    char senhaPC[100];
    entradaQ10(&senha);
    char *r = processamentoQ10(senha, senhaPC);
    saidaQ10(r);
}

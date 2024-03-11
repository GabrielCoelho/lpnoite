#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char nome[51]={'\0'};
    fflush(stdin);
    printf("Digite um nome: \n");

    fgets(nome, 51, stdin);
    nome[strlen(nome) -1] = '\0';
    printf("Nome: %s", nome);
    printf("oi");
    return 0;
}

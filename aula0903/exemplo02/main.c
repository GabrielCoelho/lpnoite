#include <stdio.h>
#include <string.h>

int main() {
    char palavra[51] = "Brasil ";
    char palavra2[51] = "um país da América do Sul";
    char copia[101];
    strcpy(copia, palavra);//copia o conteudo
    printf("Copia: %s\n", copia);
    strcat(copia, palavra2);//junta o conteudo
    printf("Copia: %s\n", copia);

    return 0;
}

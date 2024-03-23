#include <stdio.h>

void preencherVetor(int v[], int tam);
void imprimirVetor(int v[], int tam);
int main() {
    int vetor[15];

    preencherVetor(vetor, 15);
    imprimirVetor(vetor, 15);

    return 0;
}
void preencherVetor(int v[], int tam){
    printf("Preenchendo o vetor: \n");
    for (int i = 0; i < tam; ++i) {
        printf("Digite um valor: \n");
        scanf("%d", &v[i]);
    }
}
void imprimirVetor(int v[], int tam){
    printf("Exibindo o vetor: \n");
    for (int i = 0; i < tam; ++i) {
        printf("[%3d] ", v[i]);
    }
    printf("\n");
}

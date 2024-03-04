#include <stdio.h>
#define D 10
int main() {
    //declarar um vetor com 10 posicoes
    int vetor[D] = {0};
    for (int i = 0; i < D; ++i) {
        printf("Posicao %d => %d \n", i, vetor[i]);
    }
    return 0;
}

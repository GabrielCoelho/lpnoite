#include <stdio.h>
int tamanho(int x);
int main() {
    int x = 10;
    printf("Tamanho em bytes: %d ", tamanho(x));
    return 0;
}

/**
 * @brief Função que retorna o tamanho do tipo
 * @since fev 2024
 * @author Maromo
 * @param x Valor da variável do tipo inteiro
 * @return O tamanho do tipo de dado da variável
 */
int tamanho(int x){
    return sizeof(x);
}

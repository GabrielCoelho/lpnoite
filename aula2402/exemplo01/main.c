#include <stdio.h>

int main() {
    int x;
    printf("Valor de x: %d \n", x);
    printf("Entre com um valor: \n");
    scanf("%d", &x);
    printf("Valor de x: %d \n", x);
    printf("Endereco de x: %d \n", &x);
    return 0;
}

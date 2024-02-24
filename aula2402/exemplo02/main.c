#include <stdio.h>

int main() {
    int x, y;
    printf("Digite dois valores\n");
    scanf("%d%d", &x, &y);
    printf("Endereco de x: %d \n", &x);
    printf("Endereco de y: %d \n", &y);
    printf("Valor de x: %d \n", x);
    printf("Valor de y: %d \n", y);
    return 0;
}

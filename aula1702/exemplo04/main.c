#include <stdio.h>
/*
 * comentario de mais de uma liha
 * dfdaf adfkl ldaf
 * adaf
 */
int main() {
    int a, b, c;
    printf("Digite o valor de a: \n");
    scanf("%d", &a);

    printf("Endereco de a: %d \n", &a);
    printf("Endereco de b: %d \n", &b);
    printf("Valor de a: %d \n", a);

    //c receber valor de a+1 soma com 10 (preincremento)
    c = ++a + 10;
    //c = a++ + 10 // posincremento valor a soma com 10. depois acresce 1
    printf("%d\n", c);
    printf("novo valor de a: %d \n", a);
    return 0;
}

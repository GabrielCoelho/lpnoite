#include <stdio.h>

int main() {
    int soma = 0, n=0;
    do{
        do{
            printf("Digite o valor: \n");
            scanf("%d", &n);
        }while(n<0 || n>19);
        soma+= n;
    }while(n!=0);

    printf("Somatória: %d\n", soma);
    return 0;
}

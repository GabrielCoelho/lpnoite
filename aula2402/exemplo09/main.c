#include <stdio.h>

int main() {
    char produtividade;
    double salario;
    double salarioAjustado;
    printf("Digite o salário atual: \n");
    scanf("%lf", &salario);
    fflush(stdin);
    printf("Digite S ou N para produtividade: \n");
    produtividade = getchar();
    salarioAjustado  = produtividade=='S' ? salario * 1.1 : salario * 1.05;
    printf("Salario novo R$ %.2lf \n", salarioAjustado);
    return 0;
}

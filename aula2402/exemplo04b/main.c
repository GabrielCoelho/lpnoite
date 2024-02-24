#include <stdio.h>
#define PI 3.141592653
int main() {
    double area, raio, perimetro;
    printf("Digite o valor do raio: \n");
    scanf("%lf", &raio);
    area = PI * raio * raio;
    perimetro = 2 * PI * raio;
    printf("Perimetro = %.2lf \n", perimetro);
    printf("Área = %.2lf \n", area);
    return 0;
}

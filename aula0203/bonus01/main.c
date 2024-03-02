#include <stdio.h>
#define FOR(i, n) for (int i = 0; i < (n-1); i++)
int main() {
    int n = 10; // Número de iterações desejado
    int r; // Razão a ser informada
    int pa = 1; // Inicio da PA
    printf("Razao: \n");
    scanf("%d", &r);
    printf("%d ", pa);
    FOR(i, n) {
        pa+= r;
        printf("%d ", pa);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b;

    printf("Digite dois valores: \n");
    scanf("%d%d", &a, &b);
    int x = a > b;
    printf("x = %d \n", x);
    int r = 0;
    if(b){
        r = a / b;
    }else{
        printf("Impossível dividr por zero\n");
        exit(1);
    }
    printf("Resultado: %d \n", r);
    return 0;
}

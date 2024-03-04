#include <stdio.h>

int main() {
    double c;
    for (int f = 0; f <= 100; f++) {
        c =(f - 32)/ 1.8;
        printf("Para fah: %d ==> %.2lf\n", f, c);
    }
    return 0;
}

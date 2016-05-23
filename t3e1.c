#include <stdio.h>


void troca (float *a, float *b);
void troca (float *a, float *b) {
    float c;
    c = *a;
    *a = *b;
    *b = c;
}

int main () {
    float x;
    float y;
    printf("Digite um valor: ");
    scanf("%f", &x);
    printf("Digite um valor: ");
    scanf("%f", &y);

    printf("x = %.2f, y = %.2f\n", x, y);
    troca (&x, &y);
    printf("x = %.2f, y = %.2f\n", x, y);
    return 0;
}

#include <stdio.h>

float troca (float f);
float troca (float f) {
    float c;
	c = 5.0f/9.0f*(f - 32.0f);
    if  (c>=-278.0f  &&  c<=-268.0f)
        printf("zero absoluto\n");
    else if (c>=-5.0f && c<=5.0f)
        printf("congelamento da água\n");
               else if (c>=95.0f && c <= 105.0f)
               printf("ebulição da água\n");


    return c;



}

int main () {
    float r;
    float f;

    printf("digite a temperatura:");
    scanf("%f", &f);

    r = troca (f);
    printf("A temperatura em f é %.2f, e em c é %.2f\n", f, r);

    return 0;




}

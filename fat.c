/*
	eduardo.porto@acad.pucrs.br
*/
#include <stdio.h>

double fatorial(double);

double fatorial(double n)
{	
	double r;
	double cont;
	cont = 1;
	r = 1;
	while (cont<=n){
		r = r*cont;
		cont = cont + 1;
	}
	return r;
}

int main()
{
	double n;
	
	printf("Digite o número: ");
	scanf("%lf", &n);

	double f = fatorial(n);
	printf("N=%.0lf, F=%.0lf\n", n, f);
	return 0;
}

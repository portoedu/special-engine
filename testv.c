#include <stdio.h>

int main () {
	int n [10];
	int i;
	int x;
	x = 0;
	i = 0;
	while(i<10){
		n[i] = ((((i+1)*i)+3)*2);
		i = i + 1;	
	}
	
	printf("%10s%11s\n", "Elemento", "Valor");  /*dps do % o numero serve para configurar a posição 							aonde será impresso no programa*/

	for( i=0; i<10; i++){
		printf("%7d%13d\n", i, n[i]);
	}

	printf("%10s", "Total:   ---->");	/*s é para char*/

	for(i=0;i<10;i++){
		x += n[i];
	}
	printf("%6d\n", x);


	return 0;
}

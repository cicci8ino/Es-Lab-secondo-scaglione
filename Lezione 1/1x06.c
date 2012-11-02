#include <stdio.h>

int numero;

int main() {
	
	printf("Numero da convertire in binario: ");
	scanf("%d", &numero);
	do {
	   printf("%d / 2 = %d con resto di %d\n", numero, numero/2, numero%2);
	   numero=numero/2;
	} while (numero/2!=0);
	printf("%d / 2 = %d con resto di %d\n", numero, numero/2, numero%2);
    return 0;

}
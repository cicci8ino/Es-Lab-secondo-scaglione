#include <stdio.h>

int num;

int main() {
	
	printf("Inserisci un numero intero: ");
	scanf("%d", &num);
	if (num%2==0)
	   printf("Hai inserito il numero %d che è un numero pari\n", num);
	else
	   printf("Hai inserito il numero %d che è un numero dipari\n", num);
	return 0;
	
}
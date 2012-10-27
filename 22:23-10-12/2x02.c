#include <stdio.h>

int num1, num2, risultato, resto;

int main() {
	
	printf("Inserire valore 1\n");
	scanf("%d",&num1);
	printf("Inserire valore 2\n");
	scanf("%d",&num2);
	risultato=num1/num2;
	resto=num1%num2;
	printf("%d diviso %d restituisce %d con resto di %d\n", num1, num2, risultato, resto);
	if (resto==0)
	   {
		if (risultato%2==0)
	       printf("Numero pari");
	    else
	       printf("Numero dispari"); 
	   }
    return 0;
	
}
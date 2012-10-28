#include <stdio.h>

unsigned double num1=0, num2=1;
int counter=0;

int main() 

{
	printf("Inserisci numero di cifre:");
	scanf("%d",&counter);
	printf("Successione di Fibonacci:\n %.0f ", num2);
	while (counter>1)
	  {
		num1=num2+num1;
		printf("%.0f ",num1);
		counter=counter-1;
		  if (counter>2)
		 {
		       num2=num1+num2;
		       printf("%.0f ",num2);
		       counter=counter-1;
		     }
	  }
	  printf("\n");
}
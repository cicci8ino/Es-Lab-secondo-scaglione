#include <stdio.h>
//Lab 2, Esercizio 1

int num;

int main() {
	
	printf("Inserire valore\n");
	scanf("%d", &num);
	if ((num%2==1) || (num<20 || num>90))
	   printf("Vero\n");
	else 
	   printf("Falso\n");
	return 0;
	
}
#include <stdio.h>

int num, counter;

int main() {
    
    printf("Inserire valore\n");
	do {
	   scanf("%d", &num);
	   counter=num;
	   while (counter>0) {
	      printf("*");
	      counter--;
	   }
	   printf("\n");
	} while (num!=0);
	printf("0 inserito: ciclo terminato");
	return 0;
	
}
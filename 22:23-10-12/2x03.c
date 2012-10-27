#include <stdio.h>

short int counter=0;
int num;

int main() {
	
	printf("Inserire numero\n");
	   do {
		scanf("%d",&num);
		counter++;
	} while (num!=40);
	printf("%d numeri inseriti\n", counter);
	return 0;
}
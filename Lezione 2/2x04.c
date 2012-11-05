#include <stdio.h>

int max, min, num;
short int counter=0;

int main() {
	
	printf("Inserire valore\n");
	do {
		scanf("%d",&num);
		if (counter==0) {
		   max=num;
		   min=num;
        }   
		if (max<num)
		   max=num;
		else if (min>num && num!=0)
		   min=num;
		counter=1;
		}  while (num!=0);
	printf("Massimo: %d\nMinimo: %d\n", max, min);
	return 0;
	
}

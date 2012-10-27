#include <stdio.h>

int max, min, num;

int main() {
	
	printf("Inserire valore\n");
	scanf("%d",&num);
	max=num;
	min=num;
	while (num!=0) {
		scanf("%d",&num);
		if (max<num)
		   max=num;
		else if (min>num && num!=0)
		   min=num;
		}
	printf("Massimo: %d\nMinimo: %d\n", max, min);
	return 0;
	
}

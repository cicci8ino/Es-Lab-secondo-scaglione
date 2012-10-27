#include <stdio.h>
#define RANGE 200

int num1=0, num2=1, counter=1;

int main() {
	
	while (counter<RANGE) {
		if ((num1%5==0 || num1%3==0) && (num2%5==0 || num2%3==0))
	       printf("%d e %d sono divisibili per 3 o per 5 indipendentemente\n", num1, num2);
		num1++;
		num2++;
		counter++;	
	}
	return 0;
}
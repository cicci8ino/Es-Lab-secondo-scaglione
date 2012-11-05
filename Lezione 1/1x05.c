#include <stdio.h>

float a;
int b;

int main() {
	
	printf("a? ");
	scanf("%f", &a);
	printf("b? ");
	scanf("%d", &b);
	printf("Intervallo [%0.0f, %d]: somma=%0.0f media=%0.3f\n", a, b, a+b, (a+b)/2);
	return 0;
	
}
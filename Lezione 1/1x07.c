#include <stdio.h>

int numero, contatore, contatore2;

int main() {
	
	printf("Altezza?: ");
	scanf("%d", &numero);
	for (contatore=0; contatore<numero; contatore++) {
		printf("%d", contatore);
	   }
	for (contatore=1; contatore<=numero; contatore++) {
		printf("\n");	
		for (contatore2=0; contatore2<contatore; contatore2++) {
			printf("*");
		}
	}
    return 0;

}
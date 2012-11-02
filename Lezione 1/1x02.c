#include <stdio.h>

char stagione, tmp;
float temperatura;

int main() {
	do {
	   printf("Stagione? (in minuscolo)");
	   stagione=getchar();
	   tmp=getchar();
	} while (stagione!='e' && stagione!='i');
	printf("Temperatura? ");
	scanf("%f", &temperatura);
	if (stagione=='e') //estate
	   if (temperatura>=27.5 && temperatura<=32.5) 
	      printf("Temperatura estiva nella media stagionale");
	   else
	      printf("Temperatura estiva NON nella media stagionale");
	else //temperatura invernale
	   if (temperatura>=2.5 && temperatura<=7.5)
	      printf("Temperatura invernale nella media stagionale");
	   else
	      printf("Temperatura invernale NON nella media stagionale");
	return 0;

}
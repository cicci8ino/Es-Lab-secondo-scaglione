#include <stdio.h>

int a, b, x, ntentativi, counter=1, trovato=0;  //contatore e variabile pseudo booleana che riferisce se il valore sia stata trovato o meno
char direzione; //variabile char che contiene o il carattere s (per sinistra) o d (per destra)

int main() {
	
	printf("Inserire valore a\n");
	scanf("%d",&a);
	printf("Inserire valore b\n");
	scanf("%d",&b);
	printf("Inserire valore da ricercare\n");
	scanf("%d",&x);	
	printf("Quanti tentativi?\n");
	scanf("%d",&ntentativi);		
	while (counter<=ntentativi && trovato==0) {  //il programma esce dal ciclo se una delle due condizioni cade
		printf("Tentativo %d: cerco %d; a = %d; b = %d; (a+b)/2 = %d; ", counter, x, a, b, (a+b)/2);
		if (x==(a+b)/2) {
		   trovato=1;
		   printf("trovato!\n");
		}
		else {
		   if ((a+b)/2>x) {  //algoritmo di bisezione
		      b=((a+b)/2);
		      direzione='s';
		   }
		   else {
		      a=((a+b)/2);
		      direzione='d';
		   }
		   printf("non trovato; cerco a %cx\n", direzione);  //sx (se la variabile char direzione è = 's' o dx se uguale a 'd'
		   counter++;
		   }
		}	
	return 0;
}

#include <stdio.h>
#define DIM 7

int simbolo, totaliIterazioni=0, countersimbolo=0;

int main() {
	
	while (totaliIterazioni!=DIM) {  //devo eseguire DIM iterazioni
	   while (countersimbolo<totaliIterazioni) {
	      printf("-");  //stampa meno
	      countersimbolo++;  //incrementa ogni volta che stampa un simbolo
	   }
	   printf("*");  //stampa asterisco
	   while (DIM-countersimbolo-1!=0) {  //devo considerare la stampa dell'asterisco
	      printf("+");
	      countersimbolo++;
	   }
	   countersimbolo=0;  //reset contatore 
       totaliIterazioni++;  //incrementa ogni volta che scrive una riga
       printf("\n");
    }
}
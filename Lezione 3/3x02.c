#include <stdio.h>
#define COST 10

//definita una costante COST "lunga" 10

int counter=1, numero=1;

int main() {
    while (counter<=COST) {	   //quante volte devo eseguire la stampa di ogni riga?
	   while (numero<=COST) {  //quante volte devo eseguire la stampa di ogni numero per ogni riga?
		   printf("\t%d", numero*counter);  //stampa tabulare del numero*counter
		   if ((numero*counter)%5==0 && (numero*counter)%7==0)  //aggiunta asterisco nel caso in cui il numero stampato sia divisibile per 5 e per 7
		      printf("*");
		   numero++;
	   }
	numero=1;
	printf("\n");
	counter++;
    }
}
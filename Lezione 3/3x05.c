#include <stdio.h>
#define COST 10

int x=1, numero=0, contatore=0, somma=0;
char operando;  //stampa '+' o '='

int main() {
	
	while (x<=10) {  //itero da quando x=1 a x=10
	   printf("X=%d", x);
	
	   if (x%2==0)    //stampa pari o dispari
	      printf("\tpari");
	   else
	      printf("\tdispari");
	
	   printf("\tsomma =");
	   numero=x+2;  //il numero successivo a x con la stessa parità
	   while (contatore<7) {  //contatore per calcolare i 7 numeri successivi
		   printf(" %d ", numero);  //stampo tutti i numeri
		   if (contatore<6)  //l'ultimo simbolo che dovrà stampare è '='. fino ad allora stampa '+'
		      operando='+';
		   else
		      operando='=';
		   printf("%c", operando);
		   numero=numero+2;  //incremento di due il numero
		   somma=somma+numero;  //incremento di un valore numero la somma
		   contatore++;  //incremento contatore
	   }
	   printf(" %d\n", somma);  //stampa somma
	   somma=0;  //resetto somma per il prossimo ciclo
	   contatore=0;  //resetto contatore di stampa dei sette numeri per prossimo ciclo
	   x++;  //x=x+1, successivo di x per il prossimo ciclo
    }
}
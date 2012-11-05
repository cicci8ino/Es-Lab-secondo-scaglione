#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pari=0, dispari=0, num;
char singplur;

int main() {
	
	   srand(time(NULL));
	while ((pari+dispari<=10 || pari-dispari<2) && pari+dispari<20) {
          //cade appena una delle due condizioni cade
          //la prima sfrutta le leggi della logica: not(a&b)=not a || not b
	   num=rand()%100;
	   if (num%2==0)  //il numero è pari o dispari?
	      pari++;
	   else
	      dispari++;
	   if (pari+dispari==1)  //se ho inserito solo un numero il termine sarà al singolare, altrimenti sarà "numeri"
	      singplur='o';
	   else
	      singplur='i';
	   printf("Ricevuto %d, in totale ho ricevuto %d numer%c, di cui %d pari e %d dispari\n", num, pari+dispari, singplur, pari, dispari);
	}
	printf("Fine\n");
}
#include <stdio.h>
#define COST 50
//definisco costante inferiore

int x=COST, /*x è uguala alla COST*/ risultato, num, incremento, ciclo=0, somma;
char operando;

int main() {
	
	while (x<=70) {
	   printf("%d: ",x);
	      if (x%3!=0 && x%7!=0)  //non multipli di 3 e non multipli di 7
	         printf("né 3 né 7 -> %d\n", risultato=0);  //la variabile risultato non era necessario, ma la consegna non è molto chiara
	      if (x%3==0 && x%7==0)  //multipli di 3 e di 7
	         printf("sia 3 sia 7 -> %d\n", risultato=-1);
		  if (x%3==0 && x%7!=0) {//multipli di 3
		     incremento=3;  //di quanto dovrà incrementare il mio numero?
		     ciclo=1;  //deve entrare nel ciclo
		  }
		  if (x%3!=0 && x%7==0) { //multipli di 7
		     incremento=7;
		     ciclo=1;  //deve entrare nel ciclo
		  }
          num=2*x;  //raddoppio x (la variabile x deve rimanere intoccata fino al suo incremento perciò uso una variabile ausiliaria 'num')
          if (ciclo==1) { //entro o non entro nel ciclo? dipende se x è multiplo o di 7 o di 3
		      printf("solo %d -> [%d..150] ", incremento, num);  //stampo informazioni relative al multiplo e all'intervallo
		      while (num<=150) {
			     printf("%d",num);
			     if (num<=150-incremento)  //l'ultimo simbolo che dovrà stampare è '='. fino ad allora stampa '+'
			        printf("+");
			     else
			        printf("=");
			     num=num+incremento;  //incremento il numero a seconda del suo multiplo
			     somma=somma+num;  //incremento la somma del numero
		      }
		      printf("%d\n", somma);  //stampo la somma
	   	   }
		somma=0;  //resetto somma
		num=0;  //resetto num per la stampa
		ciclo=0;  //resetto variabile di entrata nel ciclo
        x++;  //incremento x
	}
}
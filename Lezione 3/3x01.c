#include <stdio.h>

int num, counter;  //counter variabile ausiliaria

int main() {
    
	do {
	   printf("Numero di '*'? ");  //richiesta imput
	   scanf("%d", &num);   //input "salvato" nella variabile num
	   counter=num;    //la variabile contatore prende il valore di num
	   while (counter>0) {    //opero un ciclo sulla variabile counter perche se rendo num=0 ciclo esce
	      printf("*");  //stampa asterisco
	      counter--;   //variabile contatore decrementata di 1 fin quando non assume il valore di 0
	   }
	   printf("\n");
	} while (num!=0);  //condizione di permanenza nel ciclo. il numero inserito deve essere diverso da 0
	printf("0 inserito: ciclo terminato.\n");
	return 0;
	
}

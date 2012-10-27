<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,x,ntentativi;
    int i,c;
    
    do{
    printf("Inserire il primo numero intero:\n");
    scanf("%i",&a);
    } while (a<0);
    
    do{
    printf("Inserire il secondo numero intero:\n");
    scanf("%i",&b);
    } while (b<(a+1));
        
    while(1){
    printf("Inserire il numero intero tra il primo e il secondo:\n");
    scanf("%i",&x);
    if(x>a&&x<b) break;
    }
    
    do{
    printf("Inserire il numero di tentativi:\n");
    scanf("%i",&ntentativi);
    } while (ntentativi<1);
      
    for(i=0;i<ntentativi;i++){
                              printf("Tentativo %i  Cerco %i a=%i\t b=%i\t a+b/2 : ",i+1,x,a,b);
                              if(x<(a+b)/2){
                                            b = (a+b)/2;
                                                        if(a==x||b==x){
                                                           printf("trovato!\n");
                                                           break;
                                                        } else printf("non trovato - cerco a sx\n");
                                            } else {
                                            a = (a+b)/2;
                                                        if(a==x||b==x){
                                                           printf("trovato!\n");
                                                           break;
                                                        } else printf("non trovato - cerco a dx\n");
                                            }
           
                              }  
    printf("Numero Tentativi:%i",i);
    
  
  
  system("PAUSE>NUL");	
  return 0;
}
=======
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
>>>>>>> Aggiunto esercizio 8

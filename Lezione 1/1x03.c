#include <stdio.h>

char scelta1, scelta2, tmp;
short int giocatore=2; //chi ha vinto?

int main() {
	
	do {
	   printf("Oggetto giocatore 1? ");
	   scelta1=getchar();
	   tmp=getchar();
	} while (scelta1!='c' && scelta1!='f' && scelta1!='s');
	
	do {
		printf("Oggetto giocatore 2? ");
		scelta2=getchar();
		tmp=getchar();
    } while (scelta2!='c' && scelta2!='f' && scelta2!='s');
	
	if (scelta1+scelta2=='s'+'c') {
	   if (scelta1=='c')
	      giocatore=1;		
	   printf("La carta avvolge il sasso"); 
    }
	if (scelta1+scelta2=='s'+'f') {
	   if (scelta1=='s')
          giocatore=1;		
	   printf("Il sasso rompe le forbici");
    }
	if (scelta1+scelta2=='c'+'f') {
	   if (scelta1=='f')
	      giocatore=1;	
	   printf("Le forbici tagliano la carta");
	}
	printf(" - vince il giocatore %d.", giocatore);
   return 0;

}
#include <stdio.h>
#include <strings.h>
#define DIM 10 //costanti blabla
#define MAX 22

int eta=0;
short int i, counter1=0, counter2=0, c=2;  //ho bisogno di due contatori se voglio mettere tutto in un ciclo (linea 44)
typedef struct {
        char nome[50];
        int eta; //eta inizializzata a 0. se rimane 0 significa che in quella posizione il mio vettore è vuoto
        char sesso;
        } s_anagr;
        
s_anagr v_anagr[DIM];
s_anagr v_finale[MAX]; 

int main () {
   //lasciate perdere gli scleri... volevo provare se funzionava o meno! 
   strcpy(v_anagr[0].nome, "Topolino");
   v_anagr[0].eta=47;
   v_anagr[0].sesso='M';
   strcpy(v_anagr[1].nome, "Minni");
   v_anagr[1].eta=37;
   v_anagr[1].sesso='F';
   strcpy(v_anagr[2].nome, "Pluto");
   v_anagr[2].eta=17;
   v_anagr[2].sesso='M';
   strcpy(v_anagr[3].nome, "Clarabella");
   v_anagr[3].eta=27;
   v_anagr[3].sesso='F';
   strcpy(v_anagr[4].nome, "Calimera");
   v_anagr[4].eta=5;
   v_anagr[4].sesso='F';
   strcpy(v_anagr[5].nome, "Pippo");
   v_anagr[5].eta=26;
   v_anagr[5].sesso='M';
   strcpy(v_anagr[6].nome, "Pippaiolo");
   v_anagr[6].eta=6;
   v_anagr[6].sesso='M';
   strcpy(v_anagr[7].nome, "Stoccafisso");
   v_anagr[7].eta=30;
   v_anagr[7].sesso='M';
   
   //riempimento cella 0 
   for (i=0; v_anagr[i].eta!=0; i++) { //controllo se l'eta sia diversa da 0
      if (v_anagr[i].sesso=='M') {  //primo if= è maschio?
         if (counter1==0 || v_finale[0].eta>v_anagr[i].eta) { //o ancora non ho iterato o l'eta che ho nel mio vettore è > dell'eta che sto leggendo
            v_finale[0].eta=v_anagr[i].eta;  //sostituisco l'eta
            strcpy(v_finale[0].nome, v_anagr[i].nome);  //nome
            v_finale[0].sesso='M';  //e sesso (automaticamente maschila per la prima cella
            counter1=1;  //prima iterazione eseguita. ora nell'if a linea 16 controllerà soltanto la seconda condizione, ovvero: il valore che sto leggendo dalla struttura v_anagr è più piccolo di quello che io ho messo in v_finale? (si ricordi che sto cercando il valore più piccolo)
         }
      }
      //riempimento cella 2
      if (v_anagr[i].sesso=='F') {  //secondo if= è femmina?          
         if (counter2==0 || v_finale[1].eta>v_anagr[i].eta) {
            v_finale[1].eta=v_anagr[i].eta;
            strcpy(v_finale[1].nome, v_anagr[i].nome);
            v_finale[1].sesso='F';
            counter2=1;           
         }  
      } 
   }
   //stampa celle
   printf("Cella 0: %s, %c, %d (maschio piu giovane)\n", v_finale[0].nome, v_finale[0].sesso, v_finale[0].eta);
   printf("Cella 1: %s, %c, %d (femmina piu giovane)\n", v_finale[1].nome, v_finale[1].sesso, v_finale[1].eta);
   //riempimento e stampa delle celle dalla 2 in poi
   for (i=0; i<MAX; i++) {  //li provo tutti, dalla posizione 0 fino alla posizione 21 (ha poco senso, dato che al massimo posso mettere 10 personaggi per la consegna e quindi sfonderei, però così c'è scritto...) variabile i addetta alla ricerca
      if (v_anagr[i].eta>=25 &&  v_anagr[i].sesso=='M') { //se l'eta anagrafica è maggiore di 25 e se è uomo
         v_finale[c].eta=v_anagr[i].eta;  //copio eta
         strcpy(v_finale[c].nome, v_anagr[i].nome);  //copio nome
         v_finale[c].sesso='M'; //sesso fissato
         printf("Cella %d: %s, %c, %d (maschi con piu di 25 anni)\n", c, v_finale[c].nome, v_finale[c].sesso, v_finale[c].eta);
         c++; //c addetta alla selezione della cella del vettore. infatti c aumenta solo se ho trovato quello che cerco (dentro if)
      }
   }
   return 0;
}
                              

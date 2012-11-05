#include <stdio.h>
#include <strings.h>
#define DIM 10
#define MAX 22

int eta=0;
short int i, counter1=0, counter2=0, c=2;  
typedef struct {
        char nome[50];
        int eta; //ho un riferimento. so quando devo fermare il ciclo di inserimento
        char sesso;
        } s_anagr;
        
s_anagr v_anagr[DIM];
s_anagr v_finale[MAX]; 

int main () {
    
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
   for (i=0; v_anagr[i].eta!=0; i++) { //controllo se l'età sia diversa da 0
      if (v_anagr[i].sesso=='M') {
         if (counter1==0 || v_finale[0].eta>v_anagr[i].eta) {
            v_finale[0].eta=v_anagr[i].eta;
            strcpy(v_finale[0].nome, v_anagr[i].nome);
            v_finale[0].sesso='M';
            counter1=1;
         }
      }      
      if (v_anagr[i].sesso=='F') {           
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
   for (i=0; i<MAX; i++) {  
      if (v_anagr[i].eta>=25 &&  v_anagr[i].sesso=='M') {
         v_finale[i].eta=v_anagr[i].eta;
         strcpy(v_finale[i].nome, v_anagr[i].nome);
         v_finale[i].sesso='M';
         printf("Cella %d: %s, %c, %d (maschi con piu di 25 anni)\n", c, v_finale[i].nome, v_finale[i].sesso, v_finale[i].eta);
         c++;
      }
   }
   return 0;
}
                              

#include <stdio.h>
#include <time.h>
#define DIM 10

typedef struct {
    int n_pari;
    int n_dispari;
    int v_pari[DIM];
    int v_dispari[DIM];
} miastruttura;

void svuota(int vettore[]);
void popola(int vettore[]);
int contaelementivalidi(int vettore[]);
void stampa(int vettore[], int n); //valori validi
void inserisci(int valore, int vettore[], int posizione);
miastruttura analisi(int vettore[], int* soglia, int n);

int main() {

   int elementivalidi, vect[DIM], sotto_s=0;
   miastruttura analisimain;
   srand(time(NULL));
   svuota(vect);
   popola(vect);
   elementivalidi=contaelementivalidi(vect);
   printf("Vettore da analizzare: ");
   stampa(vect, elementivalidi);
   analisimain=(analisi(vect, &sotto_s, elementivalidi));
   printf("\nNumeri sotto la soglia: %d\n", sotto_s);
   printf("Numeri pari: ");
   stampa(analisimain.v_pari, analisimain.n_pari);
   printf("\nNumeri dispari: ");
   stampa(analisimain.v_dispari, analisimain.n_dispari);
   return 0;
}

void svuota(int vettore[]) {
   int i;
   for (i=0; i<DIM; i++)
      vettore[i]=100;
}

void popola(int vettore[]) {
   int s, c=0;
   s=rand()%DIM+1;
   printf("%d elementi\n", s);
   for(s; s!=0; s--) {
     vettore[c]=rand()%100;
     c++;
   }
}

int contaelementivalidi(int vettore[]) {
   int i=0;
   while(vettore[i]!=100 && i!=DIM)
      i++;
   return i;
}

void stampa(int vettore[], int n) {
   int i=0;
   while(i<n) {
      printf("%d ", vettore[i]);
      i++;
   }
}

void inserisci(int valore, int vettore[], int posizione) {
   vettore[posizione]=valore;
}

miastruttura analisi(int vettore[], int* soglia, int n) {
   miastruttura risultato;
   risultato.n_pari=0;
   risultato.n_dispari=0;
   int i=0;
   while (i<n) {
      if (vettore[i]<10) {
         *soglia=*soglia+1;
         i++;
      }
      else {
      if (vettore[i]%2==0) {
         inserisci(vettore[i], risultato.v_pari, risultato.n_pari);
         risultato.n_pari++;
         i++;
      }
      else {
         inserisci(vettore[i], risultato.v_dispari, risultato.n_dispari);
         risultato.n_dispari++;
         i++;
      }
      }
   }
   return risultato;
}

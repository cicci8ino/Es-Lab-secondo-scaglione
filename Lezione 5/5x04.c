#include <stdio.h>
#include <time.h>
#define DIM 100

//prototipi

int memorizza(int quantita, int vettore[]); //prende il numero di valori da inserire nel vettore e il vettore. restituisce i valori eliminati
void svuota(int vettore[]); //prende il vettore
void stampa(int vettore[], int quantita); //prende il vettore


int main() {
    int vettore[DIM], quantita;
    svuota(vettore);
    printf("Inserire quantita: ");
    scanf("%d", &quantita);
    printf("Valori eliminati: %d", memorizza(quantita, vettore)); //prima richiama la funzione e stampa tutti i valori, poi printf e quindi il valore ritornato
    return 0;
}

void svuota(int vettore[]) { //inserisco un valore "estraneo" al mio esercizio. il generatore di numeri non mi darà mai 10
   int i;
   for(i=0; i<DIM; i++)
   vettore[i]=10; //ecco il valore "non valido"
}

int memorizza(int quantita, int vettore[]) {
    int i=0, c, numeriinseriti, found=0, eliminati=0;
    srand(time(NULL)); //seed
    while (i<quantita) {
       vettore[i]=rand()%10; //tutti i numeri da 0 a 9
       stampa(vettore, i+1); //la quantità di è data dal contatore i + 1
       printf("\n");
       c=0; //re-inizializzo contatore di ricerca
       found=0; //re-inizializzo variabile semibooleana
       while (c<i && found!=1) { //fin quando non ho scansionato tutti gli elementi (eccetto l'ultimo inserito) e fin quando non l'ho trovato
          if (vettore[c]==vettore[i]) { //confronto tra numero ricercato e numero appena inseritoa
                for (c; c<i; c++) {
                      vettore[c]=vettore[c+1];
                }
                eliminati++; //tengo il conto degli elementi eliminati.
                found=1;  //è stato trovato il numero ed è stato effettuato lo switch
          }
          c++; //incremento variabile addetta alla ricerca
       }
       i=i+1-found; //compenso. normalmente incrementerei il contatore di un'unità. ma tutto dipende dal fatto se abbia shiftato o meno.
    }
    return eliminati; //ritorno valori eliminati
}

void stampa(int vettore[], int quantita) { //stampo ogni valore
   int i=0;
   while(i<quantita) {
      printf("%d ", vettore[i]);
      i++;
   }
}

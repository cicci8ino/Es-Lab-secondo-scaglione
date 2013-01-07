#include <stdio.h>
#include <stdlib.h>

#define DIM 10

int genera (char s[])
     {int i, len = rand () %DIM + 1;
     for (i=0; i<len; i++)
         {s[i] = 'A' + rand () % ('Z' - 'A' + 1);
         }
     s[i]= '\0';
     return len; //len sarebbe la lunghezza di caratteri della stringa creata
     }

int main ()

{
 char s [DIM];
 int righe, lettere, lunghezza; //righe è un contatore per il numero delle righe nel file output.txt lettere e lunghezza invece servono all'interno della singola riga
 FILE *f1;
 f1=fopen ("output.txt", "w");
 lunghezza=0;
 for (righe=0; righe<10; righe++)
     {lettere=lunghezza; // in questo modo il contatore si azzera ogni volta
     do
          {
          lunghezza=genera(s); //così la lunghezza della stringa viene assegnata ad una variabile
           if (lettere+lunghezza<=20){
              fprintf(f1, "|%s", s);
              lettere= lunghezza + lettere;
              lunghezza=0;
               }
           }
     while (lunghezza==0);
     if (righe<9) fprintf (f1, "|   %d\n|%s", lettere,s); // con questo if si chiude la riga e si va a capo iniziando la successiva, la condizione evita di superare il limite imposto dall'es
     else fprintf (f1, "|   %d", lettere,s); //alla riga 10 sarà svolta questo comando e non si andrà a capo
     }
     fclose (f1);
 system ("pause");
 return 0;
}

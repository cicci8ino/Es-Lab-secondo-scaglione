#include <stdio.h>
#define DIM 3

typedef float t_matrice[DIM][DIM];

void calcola (t_matrice matr_media, int matr_orig[DIM][DIM]);
float media (int matr_orig[DIM][DIM], int riga, int colonna);
int dentro(int riga, int colonna);
void stampamatrice(int matr_orig[DIM][DIM]);
void stampamatricetipo(t_matrice matr_media);

int main () {

    t_matrice matr_media;
    int matr_orig[DIM][DIM], riga, colonna;
    //riempio matrice. non posso modificare la matrice tramite una funzione poco sbatti, quindi metto tutto nel main
    printf("Inserire valori nella matrice 'matr_orig'\n\n");
    for (riga=0; riga<DIM; riga++)
        for (colonna=0; colonna<DIM; colonna++) {
           printf("Cella [%d][%d]: ", riga, colonna);
           scanf("%d", &matr_orig[riga][colonna]);
        }
    printf("\nMatrice originale:\n\n");
    stampamatrice(matr_orig);
    calcola(matr_media, matr_orig);
    printf("\nMatrice media:\n\n");
    stampamatricetipo(matr_media);
    printf("\n");
    return 0;
}

//ANALISI

void calcola (t_matrice matr_media, int matr_orig[DIM][DIM]) {

    int riga, colonna;
    for (riga=0; riga<DIM; riga++) {
       for (colonna=0; colonna<DIM; colonna++)
           matr_media[riga][colonna]=media(matr_orig, riga, colonna);
    }
}

float media (int matr_orig[DIM][DIM], int riga, int colonna) {

   int rigatemp, colonnatemp, contatore=0, i;
   float mediarestituita, somma=0;
   for(rigatemp=riga-1; rigatemp<=riga+1; rigatemp++) {
         colonnatemp=colonna-1;
         while (colonnatemp<=colonna+1) {
            if (dentro(rigatemp, colonnatemp)) {
               somma+=matr_orig[rigatemp][colonnatemp];
               contatore++;
               colonnatemp++;
            }
            else colonnatemp++;
         }
   }
   contatore--;
   somma-=matr_orig[riga][colonna];
   mediarestituita=somma/contatore;
   return mediarestituita;

}

int dentro(int riga, int colonna) {

   if (riga>=0 && riga<=DIM-1 && colonna>=0 && colonna<=DIM-1)
      return 1;
   else
      return 0;
}

//STAMPA

void stampamatrice(int matr_orig[DIM][DIM]) {

    int riga, colonna;
    for (riga=0; riga<DIM; riga++) {
        for (colonna=0; colonna<DIM; colonna++) {
           printf("%d\t", matr_orig[riga][colonna]);
        }
        printf("\n");
    }
}

void stampamatricetipo(t_matrice matr_media) {

    int riga, colonna;
    for (riga=0; riga<DIM; riga++) {
        for (colonna=0; colonna<DIM; colonna++) {
           printf("%0.2f\t", matr_media[riga][colonna]);
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define DIM 10

void stampamatrice(int matrice[DIM][DIM]);
void scrivimatrice(int matrice[DIM][DIM]);
void leggimatrice();
int genera();

typedef struct s_elem {
	int valore; //valore >= 0
	char segno; //'P' se il valore e' positivo, 'N' se negativo 
	int x, y; //indici di riga e colonna nella matrice
} s_elem;
s_elem elemento;
int colonna, riga;

int main() {
	
	int matrice[DIM][DIM];
	FILE *file1;
	
	srand(time(NULL));
	for (riga=0; riga<DIM; riga++)
	     for (colonna=0; colonna<DIM; colonna++) 
	        matrice[riga][colonna]=genera();
	printf("Matrice:\n\n");
	stampamatrice(matrice);
	printf("\n");
	scrivimatrice(matrice);
	leggimatrice();
	return 0;
}

int genera() {
   return rand()%21-10;
}

void stampamatrice(int matrice[DIM][DIM]) {

    int riga, colonna;

    for (riga=0; riga<DIM; riga++) {
        for (colonna=0; colonna<DIM; colonna++)
           printf("%d\t", matrice[riga][colonna]);
        printf("\n");
    }
}

void scrivimatrice(int matrice[DIM][DIM]) {
	
	FILE *file;
	char nomefile[15];
	
	printf("Dove vuoi salvare il file? ");
	fgets(nomefile, sizeof(nomefile), stdin);	
	if ((file=fopen(nomefile, "wb"))==NULL) {
	   printf("Errore apertura file");
	   return;
	}
	for (riga=0; riga<DIM; riga++) {
		for (colonna=0; colonna<DIM; colonna++) {
	    	elemento.x=colonna;
	    	elemento.y=riga;
	    	if (matrice[riga][colonna]>=0) {
	        	elemento.segno='P';
				elemento.valore=matrice[riga][colonna];
	    	}
	    	else {
	        	elemento.segno='N';
			   	elemento.valore=matrice[riga][colonna];
		   	}
	       	fwrite(&elemento, sizeof(s_elem), 1, file);
	   	}
	}
	fclose(file);
	printf("File salvato\n\n");
}

void leggimatrice() {
	
	FILE *file;
	char nomefile[15];
	
	printf("Che file vuoi leggere? ");
	fgets(nomefile, sizeof(nomefile), stdin);
	if ((file=fopen(nomefile, "rb"))==NULL) {
		printf("Errore lettura file");
		return;
	}
	while (!feof(file)) {
		fread(&elemento, sizeof(s_elem), 1, file);
		printf("[%d][%d] = %d, %c \n", elemento.x, elemento.y, elemento.valore, elemento.segno);
	}
	fclose(file);	
}
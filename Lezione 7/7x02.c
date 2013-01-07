#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define DIM 20

void copiafile (char orig[], char copia[]);

int main () {

    char nomeoriginale[DIM], nomecopia[DIM];

    printf("Inserire nome stringa originale: ");
    fgets(nomeoriginale, sizeof(nomeoriginale), stdin);
    printf("Inserire nome stringa copia: ");
    fgets(nomecopia, sizeof(nomecopia), stdin);
    copiafile(nomeoriginale, nomecopia);
}

void copiafile (char orig[], char copia[]) {
    FILE *fileorig, *filecopia;
    char carattere;

    //controlla apertura file
    if ((fileorig=fopen(orig, "r"))==NULL) {
        printf("Errore apertura file sorgente");
        return;
    }
    if ((filecopia=fopen(copia, "w"))==NULL) {
        printf("Errore apertura file copia");
        return;
    }
    while (!feof(fileorig)) {
        carattere=fgetc(fileorig); //dobbiamo lavorare per forza su una variabile. ogni chiamata di fgetc fa "avanzare lo stream"
        if ((carattere>='A' && carattere<='Z') || (carattere>='a' && carattere<='z')) {
            if (islower(carattere)) {
                fputc(carattere-32, filecopia);
            }
            else {
                fputc(carattere+32, filecopia);
            }
        }
        else {
        fputc(carattere, filecopia);
        }
    }
    fclose(fileorig);
    fclose(filecopia);
}

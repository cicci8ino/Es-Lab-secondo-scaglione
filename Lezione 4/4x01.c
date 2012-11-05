#include <stdio.h>
#define VETUNO 5
#define VETDUE 4

int vettore1[VETUNO];
int vettore2[VETDUE];

short int i;

int main () {
    //inserimento dati
    printf("Inserire i numeri del primo vettore\n");
    for (i=0; i<VETUNO; i++) {
        scanf("%d",&vettore1[i]);
    }
    printf("Inserire i numeri del secondo vettore\n");
    for (i=0; i<VETDUE; i++) {
        scanf("%d",&vettore2[i]);
    }
    //stampa dati  
    printf("\nvettore1:");
    for (i=0; i<VETUNO; i++) {
        printf(" %d",vettore1[i]);
    }
    printf("\nvettore2:");
    for (i=0; i<VETDUE; i++) {
        printf(" %d",vettore2[i]);
    }
    printf("\nintersezioni:");
    for (i=0; i<VETDUE; i++) {
       for (i=0; i<VETUNO; i++) {
           if (vettore1[i]==vettore2[i])
              printf(" %d", vettore1[i]);
       }
    }
    printf("\n"); 
    return 0;
}                     

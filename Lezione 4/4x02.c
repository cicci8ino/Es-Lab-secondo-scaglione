#include <stdio.h>
#define VETUNO 3 //matrice di lunghezza data da due costanti
#define VETDUE 3

int vettore[VETUNO][VETDUE];

short int vett1, vett2;

int main () {
    //inserimento dati
    printf("Inserire i numeri della matrice\n");
    for (vett2=0; vett2<VETDUE; vett2++) {    
       for (vett1=0; vett1<VETUNO; vett1++) {
           scanf("%d",&vettore[vett1][vett2]);
       }
    }   
    //stampa dati  
    printf("Matrice inserita: \n"); 
    for (vett2=0; vett2<VETUNO; vett2++) {
       for (vett1=0; vett1<VETUNO; vett1++) { 
           printf("%d\t",vettore[vett1][vett2]);
       }    
       printf("\n");    
    }
    //stampa dati raddoppiati
    printf("Matrice raddoppiata: \n");
    for (vett2=0; vett2<VETUNO; vett2++) {
       for (vett1=0; vett1<VETUNO; vett1++) { 
           printf("%d\t",2*vettore[vett1][vett2]);
       }    
       printf("\n");    
    }    
    return 0;
}          

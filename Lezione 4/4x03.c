#include <stdio.h>
#include <time.h>
#define VET 10

int vettore1[VET];
int vettore2[VET];
int vettore3[VET];

short int vett1, vett2, vett3, lunghezza;

int main () {
    srand(time(NULL));  //random seed
    printf("lunghezza? ");
    scanf("%d", &lunghezza);    //inserimento dati vettore 1 e stampa
    printf("vettore 1: ");
    for (vett1=0; vett1<lunghezza; vett1++) {    //vettore1
       vettore1[vett1]=rand()%10;
       printf("%d ", vettore1[vett1]);
    }
    printf("\nvettore 2: ");    
    for (vett2=0; vett2<lunghezza; vett2++) {    //vettore2
       vettore2[vett2]=rand()%10;
       printf("%d ", vettore2[vett2]);
    }
    vett1=0;  //inizializzo pseudo puntatori
    vett2=lunghezza-1;
    printf("\nvettore 3: ");    
    for (vett3=0; vett3<lunghezza; vett3++) {    //vettore2
       vettore3[vett3]=vettore1[vett1]+vettore2[vett2];
       printf("%d ",vettore3[vett3]);       
       vett2--;
       vett1++;    
    }
    printf("\n");
    return 0;
}          

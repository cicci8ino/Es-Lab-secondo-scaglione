#include <stdio.h>
#include <time.h>
#include <strings.h>
#define DIM 10

void genera(char s[]);

int main() {

    FILE *file1;
    char stringa[DIM+1]; //per il carattere terminatore
    int c, lunghezza=0; //c= contatore per il for, lunghezza= memorizza la lunghezza della riga nel file output
    srand(time(NULL)); //seed random
    if((file1=fopen("output.txt", "w"))==NULL)  { //inizializzo puntatore a file output.txt - sola scrittura
        printf("ERROR"); //nel caso in cui non si riesca ad aprire il file ritorna 1 e stampa errore
        return 1;
    }
    for(c=1; c<=10; c++) {
        genera(stringa); //richiamo genera
        if (lunghezza+strlen(stringa)>20) {  //verifica che la lunghezza della stringa che sto per inserire sommata alla lunghezza della riga non superi i 20 caratteri
            fprintf(file1, " %d\n", lunghezza); //inserisco la lunghezza e vado a capo
            lunghezza=0; //sono andato a capo. resetto lunghezza
            //tutto questo ambaradam non verrà eseguito alla prima iterazione, in quanto sono sicuro che lunghezza+strlen non può superare 20
        }
        fprintf( file1, "%s", stringa); //scrivo stringa nel file
        printf("%d - Stringa %s, lunga %d, inserita nel file\n", c, stringa, strlen(stringa)); //sorta di output
        lunghezza+=strlen(stringa); //incremento lunghezza
    }
    if (lunghezza!=0) //serve per l'ultima riga di stampa. potrei essere andato a capo prima dell'ultima riga, ma potrei anche non aver più stringhe da stampare.
    fprintf(file1, " %d\n", lunghezza);
    fclose(file1);
    return 0;
    }

void genera(char s[]) {  //copia incolla dal foglio
   int i, len=rand()%DIM+1;
   for (i=0; i<len; i++) {
       s[i]='A' + rand()%('Z'-'A'+1);
   }
   s[i]='\0';
}

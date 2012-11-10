#include <stdio.h>
#include <time.h>
#define ELEMENTI 100

int vett1[ELEMENTI],vett_conta[ELEMENTI/10];
int conta;

int main()
{
    printf("Numeri pseudo-casuali: ");
    for (conta=0; conta<ELEMENTI; conta++)vett_conta[conta]=0;
    for (conta=0; conta<ELEMENTI; conta++)
        {
        vett1[conta]=rand()%ELEMENTI;
        printf("%d ",vett1[conta]);
        vett_conta[vett1[conta]/10]++;
        }
    printf("\nFrequenze:\n");
    for (conta=0; conta<ELEMENTI/10; conta++)
        {
        printf("Intervallo [%d..%d] = %d\n",conta*10,(conta*10)+9,vett_conta[conta]);
        }
    system("pause>nul");
    return 0;
}

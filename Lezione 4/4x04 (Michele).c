#include <stdio.h>
#include <stdlib.h>
#define MAXVETT 20
#define SIZENOME 50
#define LIM_ETA 25
#define MATUSA 999999

typedef struct {char nome[SIZENOME]; int eta; char sesso;} s_anagr;
s_anagr v_anagr[MAXVETT];
s_anagr v_finale[MAXVETT+2];
int num_anagr=0;
int conta,piu_giovaneM,piu_giovaneF,num_finale=2;

int main()
{
    // carica il vettore
    strcpy(v_anagr[num_anagr].nome,"Topolino");
    v_anagr[num_anagr].eta=47;
    v_anagr[num_anagr].sesso='M';
    num_anagr++;
    //
    strcpy(v_anagr[num_anagr].nome,"Minni");
    v_anagr[num_anagr].eta=37;
    v_anagr[num_anagr].sesso='F';
    num_anagr++;
    //
    strcpy(v_anagr[num_anagr].nome,"Pluto");
    v_anagr[num_anagr].eta=17;
    v_anagr[num_anagr].sesso='M';
    num_anagr++;
    //
    strcpy(v_anagr[num_anagr].nome,"Clarabella");
    v_anagr[num_anagr].eta=27;
    v_anagr[num_anagr].sesso='F';
    num_anagr++;
    //
    strcpy(v_anagr[num_anagr].nome,"Pippo");
    v_anagr[num_anagr].eta=26;
    v_anagr[num_anagr].sesso='M';
    num_anagr++;
    //
    /* modello per aggiungere altri dati
    strcpy(v_anagr[num_anagr].nome,"");
    v_anagr[num_anagr].eta=0;
    v_anagr[num_anagr].sesso='M';
    num_anagr++;
    //
    */
    piu_giovaneM=MATUSA;
    piu_giovaneF=MATUSA;
    for (conta=0; conta<MAXVETT; conta++)
        {
        if (v_anagr[conta].sesso=='M' && v_anagr[conta].eta<piu_giovaneM)
           {
           v_finale[0]=v_anagr[conta];
           piu_giovaneM=v_anagr[conta].eta;
           }
        if (v_anagr[conta].sesso=='F' && v_anagr[conta].eta<piu_giovaneF)
           {
           v_finale[1]=v_anagr[conta];
           piu_giovaneF=v_anagr[conta].eta;
           }
        if (v_anagr[conta].sesso=='M' && v_anagr[conta].eta>LIM_ETA)
           {
           v_finale[num_finale]=v_anagr[conta];
           num_finale++;
           }
        }
    printf("Entry #%d: \"%s\", %s, eta' %d (il piu' giovane)\n",0,v_finale[0].nome,(v_finale[0].sesso=='M' ? "maschio" : "femmina"),v_finale[0].eta);
    printf("Entry #%d: \"%s\", %s, eta' %d (la piu' giovane)\n",1,v_finale[1].nome,(v_finale[1].sesso=='M' ? "maschio" : "femmina"),v_finale[1].eta);
    for (conta=2; conta<num_finale; conta++)
        {
        printf("Entry #%d: \"%s\", %s, eta' %d (maggiore di %d anni)\n",conta,v_finale[conta].nome,(v_finale[conta].sesso=='M' ? "maschio" : "femmina"),v_finale[conta].eta,LIM_ETA);
        }
    system("pause>nul");
    return 0;
}

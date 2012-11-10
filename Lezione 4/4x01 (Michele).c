#include <stdio.h>
#define MAX_LUNG1 5
#define LUNG2 4

int conta,z,del,z;
int LUNG1=MAX_LUNG1;
int vett1[MAX_LUNG1],vett2[LUNG2];

int main()
{
	for (conta=0; conta<LUNG1; conta++)
	{
		printf("Introduci l'elemento #%d del vettore 1: ",conta);
		scanf("%d",vett1+conta);
	}
	for (conta=0; conta<LUNG2; conta++)
	{
		printf("Introduci l'elemento #%d del vettore 2: ",conta);
		scanf("%d",vett2+conta);
	}
	printf("Vettore 1: ");
	for (conta=0; conta<LUNG1; conta++)
	{
		printf("%d ",vett1[conta]);
	}
	printf("\nVettore 2: ");
	for (conta=0; conta<LUNG2; conta++)
	{
		printf("%d ",vett2[conta]);
	}
	/// cancella ripetizioni
	for (conta=0; conta<LUNG1; conta++)
	{
		for (z=conta+1; z<LUNG1; z++)
		{
		if (vett1[conta]==vett1[z] && z<(LUNG1-1))
			{// sposta tutti i successivi di 1 a sinistra stile tetris
			for (del=z; del<LUNG1-1; del++)// shift a sinistra degli elementi per 'coprire' il doppio
				vett1[del]=vett1[del+1];
			LUNG1--;
			z--;// compensa il fatto che l'array1 è gia 'avanzato' di 1 per via dello shift
			}
		else if (vett1[conta]==vett1[z])LUNG1--;
		}
	}
	printf("\nVettore 1 adattato: ");
	for (conta=0; conta<LUNG1; conta++)
	{
		printf("%d ",vett1[conta]);
	}
	printf("\nIntersezione: ");
	for (conta=0; conta<LUNG1; conta++)
	{
		for (z=0; z<LUNG2; z++)
		{
			if (vett1[conta]==vett2[z])
			{
				printf("%d ",vett1[conta]);
				z=LUNG2; // sostitutivo di un break "brutto"
			}
		}
	}
	system("pause>nul");
	return 0;
}

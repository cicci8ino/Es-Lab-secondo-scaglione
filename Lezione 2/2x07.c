#include <stdio.h>

char op, vop; //operando switch, variabile di stampa dell'operando
int num1, num2, risultato;
short int operationtype=0; //variabile per la stampa dell'operazione

int main() {
	
	printf("Inserire primo numero\n");
	scanf("%d",&num1);
	printf("Inserire secondo numero\n");
	scanf("%d",&num2);
	printf("Inserire operando ('S' per somma, 'D' per differenza, 'M' per moltiplicazione, 'V' per divisione, 'X' per numero massimo o 'N' per numero minimo)\n");
	scanf("%c",&op);	//doppia scanf
	scanf("%c",&op);
	switch (op) {
		case 's': case 'S': {
			risultato=num1+num2;
			operationtype=1;
			vop='+';
		}
		break;
		case 'd': case 'D': {
			risultato=num1-num2;
			operationtype=1;
			vop='-';
		}
		break;
	    case 'm': case 'M': {
		    risultato=num1*num2;
		    operationtype=1;
		    vop='*';
	    }
		break;
		case 'v': case 'V': {
			risultato=num1/num2;
			operationtype=1;
			vop='/';
		}
		break;
		case 'x': case 'X': {
			if (num1!=num2) {
				if (num1>num2)
			    risultato=num1;
			    else 
			    risultato=num2;
			    printf("Il valore più grande è %d\n",risultato);
			}
			else
			printf("I valori inseriti (%d e %d) sono uguali\n", num1, num2);
			operationtype=0;
		break;	
		}
		case 'n': case 'N': {
			if (num1!=num2) {
		        if (num1<num2)
		        risultato=num1;
		        else
		        risultato=num2;
			    printf("Il valore più piccolo è %d\n",risultato);
			}
			else
			printf("I valori inseriti (%d e %d) sono uguali\n", num1, num2);
		    operationtype=0;
		break;
		}
		default: printf("Operando invalido. Risultato = %d\n",risultato=-1);
	}
	if (operationtype==1)
	printf("%d%c%d = %d", num1, vop, num2, risultato);
	return 0;
}
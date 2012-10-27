#include <stdio.h>

int counter=0;
float celsius=-20; /*da -20*/

int main() {
	
	while (celsius<200) { //a 200
		printf("Temperatura Celsius: %0.2f\nTemperatura Farenheit :%0.2f\n", (celsius), (celsius*9/5+32)); //conversione in farenheit
		if ((celsius*9/5+32)-celsius==100)  //far-celsius
		   printf("*\n"); //identificatore nel caso far-celsius=100
		celsius=celsius+7;
	}
	return 0;
	
}
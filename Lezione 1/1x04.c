#include <stdio.h>

float temperatura, max; //celsius
short int zero=0, counter=0;

int main() {
	
	printf("Kelvin = Centigradi + 273.15\nFahrenheit = 32 + (Centigradi / 100) * 180");
   do {
       printf("\nTemperatura? ");
	   scanf("%f", &temperatura);
	   printf("%0.2f C = %0.2f K = %0.2f F\n", temperatura, temperatura+273.15, 32+(temperatura/100)*180);
	   if (temperatura==0)
	      zero=1;
	   if (temperatura>max || counter==0)
	      max=temperatura;
	   counter=1;
    }  while (temperatura>=-273.15);
	printf("\nTemperatura massima registrata\n: %0.2f C", max);
	if (zero==1)
	   printf("\nRegistrata la temperatura di 0 C\n");
    return 0;

}

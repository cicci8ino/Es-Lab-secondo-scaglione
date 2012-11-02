#include <stdio.h>

float temperatura, max; //celsius
short int zero=0;

int main() {
	
	printf("Kelvin = Centigradi + 273.15\nFahrenheit = 32 + (Centigradi / 100) * 180");
    printf("\nTemperatura? ");
    scanf("%f", &temperatura);
    max=temperatura;
    while (temperatura>=-273.15) {
	   printf("%0.2f C = %0.2f K = %0.2f F", temperatura, temperatura+273.15, 32+(temperatura/100)*180);
	   if (temperatura==0)
	      zero=1;
	   printf("\nTemperatura? ");
	   scanf("%f", &temperatura);
	   if (temperatura>max)
	      max=temperatura;
    }
	printf("\nTemperatura massima registrata: %0.2f C", max);
	if (zero==1)
	   printf("\nÈ stata registrata la temperatura di 0 C");

   return 0;

}
#include <stdio.h>

float conversione(int);
int main() {
    int temp;
    printf("Inserire gradi espressi in Farenheit (intero): ");
    scanf("%d", &temp);
    printf("%d Farenheit = %f Celsius", temp, conversione(temp) );
    return 0;
}
float conversione(int temp) { //il nome è indifferente. si parla di parametro formale
    float returntemp;
    returntemp = temp;
    returntemp = (returntemp-32)*5/9;
    return returntemp;
}


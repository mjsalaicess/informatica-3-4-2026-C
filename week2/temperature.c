#include <stdio.h>
int main (void) {
    float Fahrenheit;
    float Celsius;
    printf("Enter Temperature in Fahrenheit:" );
    scanf("%f", &Fahrenheit);
    Celsius= (Fahrenheit-32)/1.8;
    printf("%.2f Degrees Fahrenheit it's equal to %.2f Degres Celsius \n",Fahrenheit, Celsius);
    //-40 Degrees Fahrenheit is equal to -40 Degrees Celsius
}

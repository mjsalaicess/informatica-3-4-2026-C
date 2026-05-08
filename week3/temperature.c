#include <stdio.h>
int main (void) {
    float Fahrenheit;
    float Celsius;
    printf("Enter Temperature in Celsius:" );
    scanf("%f", &Celsius);
    Fahrenheit= (Celsius*1.8)+32;
    printf("%.2f°C = %.2f°F \n",Celsius, Fahrenheit);
    //-40 Degrees Fahrenheit is equal to -40 Degrees Celsius

    if(Celsius<0) {
    printf("Freezing Weather❄️\n");}

    else if(Celsius<10){
    printf("Very Cold Weather🥶\n");}

    else if(Celsius<20){
    printf("Chilly Weather🧥\n");}

    else if(Celsius<30){
    printf("Normal Weather🖼️\n");}

    else if(Celsius<40){
    printf("Hot Weather☀️\n");}

    else{
    printf("Very Hot Weather🔥\n");}
}

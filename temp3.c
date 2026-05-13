#include <stdio.h>
//1.Prototype
void c_to_f(void);
void f_to_c(void);

int main(void){
    int user_response;
    printf("Temperature Converter\n");
    printf("Select Option\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf ("%d", &user_response);

    if(user_response ==1){
        c_to_f();
    }else if (user_response==2){
        f_to_c();
    }else{
        printf("Invalid Option\n");
    }
    //call.3
    c_to_f();
    f_to_c();
}
//2.Definition
void c_to_f(void){
    int c;
    printf("What is the temperature in celsius:");
    scanf("%d",&c);
    int f= (c*1.8)+32;
    printf("%dC=%dF\n",c,f);

}
 void f_to_c (void){
    int f;
    printf("What is the temperature in Fahrenheit?:");
    scanf("%d",&f);
    int c= (f - 32) /1.8;
    printf("%dF=%dC\n",f,c);
 }


#include <stdio.h>
//1.Prototype
void addition(void);
void subtraction(void);
void multiplication(void);
void divition(void);

int main(void){
    int user_response;
    printf("Calculator\n");
    printf("Select an option:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Divition\n");
    scanf("%d", &user_response);

    if(user_response ==1){
        addition();
    }else if (user_response== 2){
        subtraction();
    }else if (user_response== 3){
        multiplication();
    }else if (user_response== 4){
        divition();
    } else {
        printf("Invalid option\n");
    }

}

//2.Definition
void Addition(void){
    float Addition;
    float manzana;
    printf("What do you want to add?:");
    scanf("%f %f",&Addition,manzana);
    float Result= Addition+manzana;
    printf("%f + %f\n", Addition, manzana, Result);
}
 void Subtraction (void){
    float Subtract;
    float banana;
    printf("What do you want to subtract?:");
    scanf("%f %f",&Subtraction,banana);
    float Result=Subtraction-banana;
    printf("%f - %f\n", Subtraction, banana, Result);
 }
 void Multiplication (void){
float Multiplication;
float pear;
printf("What do you want to multiply?:");
scanf ("%f %f", &Multiplication, pear) ; float Result=Multiplication-pear;
printf("%f*%f\n", Multiplication, pear, Result) ;
 }
 void Division (void){
float Division;
float grape;
printf("What do you want to divide?:");
scanf ("%f %f", &Division, grapw) ; float Result=Division-grape;
printf("%f/%f\n", Division, grape, Result) ;
 }

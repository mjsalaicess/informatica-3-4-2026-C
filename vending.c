#include <stdio.h>
int main(void){

    //Create variables for first snack (Enchiladas)
    float price1 = 159.99;
    int quantity1 = 30;
    char code1 = 'E';

    printf("vending machine stock\n");
    printf("---------------------------\n");
    printf("Item name:Enchiladas\n");
    printf("Price:%.2f \n",price1);
    printf("Selection code: %c \n", code1);

    //Tortas
    float price2 = 70.99;
    int quantity2 = 40;
    char code2 = 'T';

    printf("Item name:Tortas\n");
    printf("Price:%.2f \n",price2);
    printf("Selection code: %c \n", code2);

    //Juice
    float price3 = 29.99;
    int quantity = 50;
    char code3 = 'J';

    printf("Item name:Juice\n");
    printf("Price:%.2f \n",price3);
    printf("Selection code: %c \n", code3);

}

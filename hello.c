#include <stdio.h>
int main(void){
    char YourName[50];
    printf("Your name is: ");
    scanf("%s", &YourName);
    printf("Your name is: %s \n", YourName);
    printf("Hello %s! \n", YourName);

    char YourFavoriteColor[50];
    printf("Your favorite color is: ");
    scanf("%s", &YourFavoriteColor);
    printf("Your favorite color is: %s \n", YourFavoriteColor);
    printf("Your favorite color is %s! \n", YourFavoriteColor);
}

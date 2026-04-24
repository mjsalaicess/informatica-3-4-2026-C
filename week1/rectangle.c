#include <stdio.h>

int main (void)
{
    int width;
    int lenght;
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter lenght: ");
    scanf("%d", &lenght);
    printf("Area %d\n", width*lenght);
    printf("Perimeter %d\n", 2*(width+lenght));
}

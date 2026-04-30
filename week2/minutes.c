#include <stdio.h>
int main(void){
    int RunningTime;
    printf("Enter movie running time:"); //this is printing the message
    scanf("%d", &RunningTime);
    int startHour;
    int startMin;
    printf("Start time:");
    scanf("%d:%d", &startHour, &startMin);
    int hours = RunningTime / 60;
    int minutes = RunningTime % 60;

    int endHour= startHour + hours;
    int endMin = startMin + minutes;

    printf("The movie will last %dhr and %dmin\n", hours, minutes);
    printf("End time:%d:%02d\n", endHour, endMin);
}

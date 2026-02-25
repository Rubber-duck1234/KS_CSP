// KS, 7TH, Time of day
#include <stdio.h>

int main(){

    int time;

    printf("What time is it (In millitary time): \n");
    scanf("%d", &time);
    if (time <= 11){
        printf("Good morning.");
    }

    return 0;
}
// KS, 7TH, Time of day
#include <stdio.h>

int main(){

    int time;

    printf("What time is it (In millitary time): \n");
    scanf("%d", &time);
    if (time <= 11 && time > 0){
        printf("Good morning.\n");
    
    } else if (time <= 18 && time > 0){
        printf("Good afternoon.\n");
    } else if (time <= 24 && time > 0){
        printf("Good night\n");
    } else{
        printf("Incorect.\n");
    }

    return 0;
}
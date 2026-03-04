#include <stdio.h>

int main(){
    int grades[] = {78,18,99,87,94,86,88,90};
    printf("%d\n", grades[1]);
    grades[1] = 70;
    printf("%d\n", grades[1]);


    float measurements[10];
    measurements[0] = 5.25;
    measurements[1] = 1.25;
    measurements[2] = 3.65;
    measurements[3] = 87.15;
    measurements[4] = 5.89;
    measurements[5] = 12.12;
    measurements[6] = 9.98;
    measurements[7] = 9.99;
    measurements[8] = 5.09;
    measurements[9] = 13.52;

    printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f\n", measurements[0],measurements[1],measurements[2],measurements[3],measurements[4],measurements[5],measurements[6],measurements[7],measurements[8],measurements[9]);
    
//            1st is number of items in array, 2nd is max char in each item.
    char names[][20] = {"Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Jake"};
                  
    printf("%s", names[6]);

    return 0;
}
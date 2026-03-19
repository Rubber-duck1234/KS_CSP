#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    char names[][20] = {"Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Jake"};

    for(int i = 20; i > 0; i --){
        printf("%d ",i);
    }
    printf("\n"); // just for a new line


    int names_len = sizeof(names)/ sizeof(names[0]); // finds how many bytes of space it takes in program
    for(int x = 0; x < names_len; x++){
        printf("%s LaRose\n", names[x]);
    }


    srand(time(NULL));

    int number = rand() % 10 +1;
    int count = 0;
    for(count; count < number; count++){
        printf("duck\n");
    }
    printf("Goose!\n");
    return 0;
}
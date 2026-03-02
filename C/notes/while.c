#include <stdio.h>
#include <stdlib.h>// standerd library
#include <time.h>// time
#include <stdbool.h> // alows booleans

int main(){
    int i = 1;
    while(i <= 10){
        printf("%d\n", i);
        i++; // increases variable i by 1
    }


    // set a random number
    srand(time(NULL)); // takes seconds to generate random number

    printf("%d\n", rand() % 11); // random num between 0 and 10
    printf("%d\n", rand()% 10 +1);// random num between 1 and 10
    printf("%d\n", (rand() % 5) + 5);

    int goose = (rand() % 20) +1;
    int count = 1;
    while (count < goose){
        printf("duck\n");
        count ++;
    }
    printf("GOOSE!\n");
    int number = (rand() % 30) + 1;
    while(true){
        int guess;
        printf("Guess a number between 1 and 30: \n");
        scanf("%d", &guess);

        if (guess == number){
            printf("You won!\n");
            break;
        }else if (guess < number){
            printf("Guess higher.\n");
        }else{
            printf("Guess lower.\n");
        }
    }

    return 0;
}
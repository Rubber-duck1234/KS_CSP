// KS, 7th, Fizz Buzz
#include <stdio.h>

int main(){

    int num = 1;

    while (num <= 50){
        if (num % 3 == 0 && num % 5 == 0){
            printf("FizzBuzz\n");
        }else if (num % 3 == 0){
            printf("Fizz\n");
        }else if (num % 5 == 0){
            printf("Buzz\n");
        }else{
            printf("%d\n",num);
        }
        num += 1;
    }

    return 0;
}
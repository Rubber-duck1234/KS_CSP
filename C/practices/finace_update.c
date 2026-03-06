#include <stdio.h>


char input(char* change){
    printf("What is your monthly %s: $\n", change);
    return scanf("%s", &change);
    }

int main(){

    char income = input("income");
    char rent = input("rent");
    char utilities = input("utilities");
    char groceries = input("groceries");
    char transportation = input("transportation");


    return 0;
}
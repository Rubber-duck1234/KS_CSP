#include <stdio.h>


char input(char* change){
    printf("What is your monthly %s: $\n", change);
    return scanf("%s", &change);
    }

int main(){

    char income = input(income);

    return 0;
}
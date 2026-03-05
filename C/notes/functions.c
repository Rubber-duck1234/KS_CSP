#include <stdio.h>
// ex 1
int sqr(int num){
    return num * num;
}

// ex 2.
int count = 0;
void add(){                   // use void for a no return function
    count++; 
}        

// ex 3           (star means all)
void hello(char* name){
    printf("Hello %s! Welcome to my program!\n", name);
}


// ex 1 continued
int main(){
    int number = sqr(12);
    printf("%d\n", number);
    printf("%d\n", sqr(8));

    // ex 2 continued.
    printf("%d\n", count);
    add();
    add();
    add();
    add();
    add();
    add();
    add();
    add();
    printf("%d\n", count);

    // ex 3 continued
    hello("Alex");
    hello("Katie");
    hello("Andrew");
    hello("Tia");
    hello("Treyson");
    hello("Xavier");
    hello("Jake");


    return 0;
}
// this is a comment in C!
#include <stdio.h> // lets inputs and outputs

int main(){
    // variable examples
    int age = 9999;
    const float gpa = 3.98;
    char grade = 'A'; // single letter is single quotes
    char name[] = "Eric";
    int number;
    char user[50]; // number is how many charactors it gets to hold

    printf("Tell me your name: \n");
    scanf("%s", &user);

    printf("What is  your favorite number\n");
    scanf("%d", &number);

    printf("%s's favorite number is: %d\n", user, number);
    printf("It worked!\n");
    printf("%d\n", age);
    printf("Your GPA is: %f\n", gpa);
    printf("You have a %c in computer science\n", grade);
    return 0; // requiered last line
}
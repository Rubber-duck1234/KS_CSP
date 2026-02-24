// KS, Strings notes
#include <stdio.h>
#include <string.h>

int main(){
    char subject[] = "Computer Science Principals";
    char school[] = "UCAS";
    char book[50];

    printf("What is your favorite book: \n");
    //scanf("%s", &book);     only one word
    fgets(book, sizeof(book), stdin); // alows multiple words

    printf("This is %s at %s. It is awesome!\n", subject, school);
    printf("%s is a cool book!\n", book);

    //concatination
    char first[] = "Kingsley";
    char last[] = "stockton";
    char full_name[50];

    //first[0] = 'k';
    //first[1] = 'a';
    //first[2] = 't';
    //first[3] = 'i';
    //first[4] = 'e';
    //first[5] = ' ';
    //first[6] = ' ';
    //first[7] = ' ';
    //first[8] = ' ';

    strcat(full_name, first);
    strcat(full_name, " ");
    strcat(full_name, last);

    printf("%s\n", first);

    //length of a string
    printf("%lu\n", strlen(full_name));

    return 0;
}
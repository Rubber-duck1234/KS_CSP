#include <stdio.h>
#include <string.h>

int main(){
    char first[] = "Kingsley";
    char last[] = "stockton";
    char full_name[50];
    strcat(full_name, first);
    strcat(full_name, " ");
    strcat(full_name, last);

    printf("%s\n", first);



     return 0;
}
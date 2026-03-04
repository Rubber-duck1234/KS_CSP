#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    
     char choise[10];

    printf("Wellcome fighter! \n");
    printf("You have a choise, Take the sword or run (s/r): ");
    scanf("%s\n", &choise);
    if (choise == "r"){
        printf("You are cought by gaurds and exicuted.\n");
    }else if (choise == "s"){
        printf("A man tells you that you were taken in battle and now have to fight waves of monsters for peopple enjoyment. You start training and now have a higher skill in swords.\n");
    }else{
        printf("incorect");
    }
    

     return 0;
}
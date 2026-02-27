#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    
     char wepon[20];
     int damg;

    printf("Wellcome fighter!, choose your wepon: \n");
    printf("Sword, bow, axe: \n");
    scanf("%s", &wepon);
    if (wepon == "sword"){
     int damg = 20;
    }else if (wepon == "bow"){
     int dmag = 10;
    }else if (wepon == "axe"){
     int damg = 40;
    }

    printf("%d, \n", damg);

     return 0;
}
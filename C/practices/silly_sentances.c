//KS, 7th, silly sentences
#include <stdio.h>
#include <strings.h>

int main(){

    char verb[10];
    char country[20];
    char adjective[20];
    char thing[20];
    char contry2[20];

    printf("Give me a verb ending in ing: \n");
    scanf("%s", &verb);
    printf("Give me a country: \n");
    scanf("%s", &country);
    printf("Give me a adjective: \n");
    scanf("%s", &adjective);
    printf("Give me a random thing: \n");
    scanf("%s", &thing);
    printf("Give me another contry: \n");
    scanf("%s", &contry2);

    strcat(adjective, " ");
    strcat(adjective, thing);

    printf("You were %s to %s, when suddenly a %s fell out of the sky and flung you to %s.",verb, country, adjective, contry2);
    
    return 0;
}
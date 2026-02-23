// KS, 7th, Finacial calculator
#include <stdio.h>

int main(){
    int income = (1);
    int rent = (1);
    int utilities = (1);
    int groceries = (1);
    int transport = (1);

    printf("What is your monthly income: \n");
    scanf("%d", &income);
    printf("What is your monthly cost for housing: \n");
    scanf("%d", &rent);
    printf("What is monthly cost for utilities: \n");
    scanf("%d", &utilities);
    printf("What is your monthly cost for groceries: \n");
    scanf("%d", &groceries);
    printf("What is your monthly transportation cost: \n");
    scanf("%d", &transport);

    printf("Your housing cost is %d, that is %d% of your income.\n", rent, (rent/income*100));

    return 0;
}
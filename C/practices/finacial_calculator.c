// KS, 7th, Finacial calculator
#include <stdio.h>

int main(){
    float income;
    float rent;
    float utilities;
    float groceries;
    float transport;


    printf("What is your monthly income: \n");
    scanf("%f", &income);
    printf("What is your monthly cost for housing: \n");
    scanf("%f", &rent);
    printf("What is monthly cost for utilities: \n");
    scanf("%f", &utilities);
    printf("What is your monthly cost for groceries: \n");
    scanf("%f", &groceries);
    printf("What is your monthly transportation cost: \n");
    scanf("%f", &transport);

    int rent_per = (rent/income *100);
    int utilities_per = (utilities/income *100);
    int groceries_per = (groceries/income *100);
    int transport_per = (transport/income *100);
    float savings = (income/10);
    int left = (income-(rent + utilities + groceries +transport + savings));

    printf("Your housing cost is %.2f$, that is %d percent of your income.\n", rent, rent_per);
    printf("Your utilities are %.2f, that is %d percent of your monthly income.\n", utilities,utilities_per);
    printf("Your groceries cost is %.2f, that is %d percent of your income.\n", groceries, groceries_per);
    printf("Your transportation cost is %.2f, that is %d percent of your income.\n", transport, transport_per);
    printf("You need to save %.2f$, that is 10 percent of your income.\n", savings);
    printf("You have %d$ of spending money left.", left);

    return 0;
}
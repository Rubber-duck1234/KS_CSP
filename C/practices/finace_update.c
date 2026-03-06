// KS, 7th, Updated calculator
#include <stdio.h>



float input(char* change){
    float var;
    printf("What is your monthly %s: $\n", change);
    scanf("%f", &var);
    return var;
     
}
float pct(float thing, float income){
    return thing / income * 100;
    
}

int main(){

    float income = input("income");
    float rent = input("rent");
    float utilities = input("utilities");
    float groceries = input("groceries");
    float transportation = input("transportation");

    float rent_pct = pct(rent, income);
    float utilities_pct = pct(utilities, income);
    float groceries_pct = pct(groceries, income);
    float transprtation_pct = pct(transportation, income);
    float savings_pct = (income / 10);
    float left = (income-(rent + utilities + groceries + transportation + savings_pct));

    printf("Your monthly rent is %.0f$, that is %.0f percent of your income.\n", rent, rent_pct);
    printf("Your monthly utilities is %.0f$, that is %.0f percent of your income.\n", utilities, utilities_pct);
    printf("Your monthly groceries is %.0f$, that is %.0f percent of your income.\n", groceries, groceries_pct);
    printf("Your monthly transportation is %.0f$, that is %.0f percent of your income.\n", transportation, transprtation_pct);
    printf("You should save %.0f, that is 10 percent of your income.\n", savings_pct);
    printf("You have %.0f$ left for spending.\n", left);

    return 0;
}
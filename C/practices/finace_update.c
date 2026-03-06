// KS, 7th, Updated calculator
#include <stdio.h>


int input(change){
    printf("What is your monthly %s: $\n", change);
    scanf("%d", &change);
}
int pct(int thing, int income){
    int ans = (thing / income * 100);
    return ans;
}

int main(){

    int income = input("income");
    int rent = input("rent");
    int utilities = input("utilities");
    int groceries = input("groceries");
    int transportation = input("transportation");

    int rent_pct = pct(rent, income);
    int utilities_pct = pct(utilities, income);
    int groceries_pct = pct(groceries, income);
    int transprtation_pct = pct(transportation, income);
    int savings_pct = (income / 10);

    printf("Your monthly rent is %d$, that is %d percent of your income.\n", rent, rent_pct);
    printf("Your monthly utilities is %d$, that is %d percent of your income.\n", utilities, utilities_pct);
    printf("Your monthly groceries is %d$, that is %d percent of your income.\n", groceries, groceries_pct);
    printf("Your monthly transportation is %d$, that is %d percent of your income.\n", transportation, transprtation_pct);
    printf("You should save %d, that is 10 percent of your income.\n", savings_pct);

    return 0;
}
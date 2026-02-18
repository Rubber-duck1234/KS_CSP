# KS, financial calculator
monthly_income = float(input("What is your monthly income: $"))
rent_mortgage = float(input("What is your rent or mortgage: $"))
utilities = float(input("what is your utilites cost per month: $"))
groceries = float(input("What is your monthly cost for groceries: $"))
transportation = float(input("What is your monthly transportation cost: $"))

savings = round(monthly_income / 10)
rent_per = round((rent_mortgage/monthly_income)*100,)

print("Your rent is", rent_mortgage, "that is", rent_per, "% of your monthly income." )

print("Your utilitys are", utilities, "that is", round(utilities/monthly_income*100), "% of your monthly income")

print("Your groceries are", groceries, "that is", round(groceries/monthly_income*100), "% of your monthly income" )

print("Your tansportation is", transportation, "that is", round(transportation/monthly_income*100), "% of your monthly income")

print("You should save $",savings,"that is 10% of your income.")

leftover = monthly_income - (rent_mortgage + utilities + groceries + transportation + savings)
print("You have", leftover,"left to spend")
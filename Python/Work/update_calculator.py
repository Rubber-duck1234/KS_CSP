# KS, 7th, updated calculaator
def month(change):
    return round(float(input(f"What is your monthly {change}: $")))

income = month("income")
rent = month("rent")
utilities = month("utilitys cost")
grocerys = month("groceries cost")
transport = month("transport cost")


def pct(stated, income):
    return round(stated/income*100)

rent_pct = pct(rent, income)
utilities_pct = pct(utilities, income)
grocerys_pct = pct(grocerys, income)
transport_pct = pct(transport, income)
savings_pct = income / 10

print("Your rent is", rent, "that is", rent_pct, "% of your monthly income.")
print("Your utilities cost is", utilities, "that is", utilities_pct, "% of your monthly income.")
print("Your grotcery cost is", grocerys, "that is", grocerys_pct, "% of your monthly income.")
print("Your tansportation cost is", transport,"that is", transport_pct, "% of you monthly income.")
print("You should save", savings_pct, "that is 10% of you income.")
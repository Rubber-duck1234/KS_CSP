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
savings_pct = pct(income, income)
print(savings_pct, "%")

print("Your rent is", rent, "that is", rent_pct, "% of your monthly income.")
price = float(input("what is the price of your item: $"))

sales_tax = float(input("what is the sales tax: %"))/100

total = round(price + (price * sales_tax), 2)

print(total)
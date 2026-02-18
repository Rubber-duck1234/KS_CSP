numbers = [4,54,54,5432,3,5,54,35,43,32,4,32,5,43,65,43,64]
names = ["Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Jake"]

names[0] = "Alexander"
names.append("Jayshree") #adds to the end of the list
index = names.index("Vienna")
names.pop(index)
print(len(names))
print(names)

for name in names:
    print(f"Hello {name}")

for number in numbers:
    print(f"{number} - 10 = {number-10}")

for i in range(20):
    print(f"this is the {i} iteration of this loop")
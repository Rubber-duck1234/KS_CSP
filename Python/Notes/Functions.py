def hello():
    print("Hello World!")

def full_name(first, last):
    return f"{first} {last}"

hello()
print(full_name("Kingsley", "stockton"))
name = full_name("leo", "stockton")
print(f"{name} doesn't like {full_name('Annabeth', 'chase')}")


def factoral(number):
    total = 1
    for i in range(1, number +1):
        total *= i
    return total

for num in range(1,10):
    print(f"tha factoral of {num} is {factoral(num)}")

name = "Kingsley"

def admin():
    print(f"{name} is the admin for the lab!")

admin()
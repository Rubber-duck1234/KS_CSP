"""number = 42

if number < 10 and number > -10:
    print(f"{number} is a single digit number")
elif abs(number) < 100:
    print(f"{number} is a double digit number")
else:
    print(f"{number} is a triple digit number")

print("End of the program")"""

name = input("What is your name: ").strip().capitalize()

if name == "Arthur":
    print("Welcome King Arthur.")
    quest = input("What is your quest: ").strip().title()
    if quest == "holy Grail":
        print("You may pass. Goog luck!")
    else:
        print(f"{quest} is a lame quest. Get Good.")
else:
    print(f"Hello {name}!")
import random #library code someone else wrote, always import at the top
start = 18

while start >= 2:
    print(start)
    start -= 2

goose = random.randint(1,20)
count = 1

while count < goose:
    print("Duck")
    count += 1
print("GOOSE!")

number = random.randint(1,25)

while True:
    guess = int(input("Chose a number between 1 and 25: "))
    if guess == number:
        print(f"Good job you guesed {number}, and it was the number!")
        break #exits the loop
    elif guess > 25 or guess < 1:
        print("that isn't an option.")
    elif guess < number:
        print("number is higher")
    else:
        print("number is lower")
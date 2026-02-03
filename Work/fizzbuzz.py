# KS, 7th, FizzBuzz
number = 1

while number <= 50:
    print(number)
    number += 1
    if number % 3 == 0:
        print("Fizz")
    elif number % 5 == 0:
        print("Buzz")
    elif number % 3 == 0 and number % 5 == 0:
        print("FizzBuzz")
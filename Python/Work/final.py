import random
words = ["onyx", "xylaphone", "glyph", "syzygy", "zuzwang", "house", "dermatoglyphics", "xebec", "bdellium", "grawlix",] # list of random words
word = random.choice(words) # picks a random word
#code, LA
print("Instructions: To play hangman, you will be given a word you need to guess(by letter). Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess too many wrong times and the person is built, you lose.")

let_list = []# code,LA
loss = 0
total_losses = 8

def end():# Function to tell the user what the word was if they lose., code KS
    print(word, "was the word by the way.")

def list_guess():# shows what the person has guesed. all guesses, code KS
    print(let_list, "this is what you have guesed.")



while True:
    display = ""

    guess = input("guess a singular letter: ").lower()
    let_list.append(guess)

    for letter in word:#checks if letter in word, coded by kingsley
        if letter in let_list:
            display += letter
        else:
            display += "_"
    

    if guess not in word: #tells the user is they guesed wrong, coded by lilian
        loss += 1
        print("Nope, wrong letter!")

    list_guess()

    if display == word: #code, LA
        print("You won!")
        break


    if loss == 0: #all the hang mans and prints if loss condition is met, coded by lilian
        print('''              --------
             |      |
             |
             |
             |  
             |
             --------''')
    elif loss == 1:
        print(
        '''--------
   |      |
   |      O
   |
   |
   |
   --------''')
    elif loss == 2:
        print('''
   --------
   |      |
   |      O
   |      |
   |
   |
   --------''')
    elif loss == 3:
        print('''--------
   |      |
   |      O
   |      |
   |     / 
   |
   --------''')
    elif loss == 4:
        print( '''--------
   |      |
   |      O
   |      | 
   |     / \\
   |    
   --------''')
    elif loss == 5:
        print('''--------
   |      |
   |      O
   |    \\ | 
   |     / \\
   |
   --------''')
    elif loss == 6:
        print('''--------
   |      |
   |      O
   |    \\ | /
   |     / \\
   |       
   --------''')
    elif loss == 7:
        print('''--------
   |      |
   |      O
   |    \\ | /
   |     / \\
   |    -   
   --------''')
    elif loss == 8:
        print("""---------
   |        |
   |        O
   |     \\  |  /
   |       / \\
   |      -    -
   --------""")
        print("Wow, eight guesses and you still lost! You have hung hangman.")
        end()
        break
    display = "           "#code KS
    for letter in word: #prints the display and checks if letter is in word
        if letter in let_list:
            print(letter)
        else:#code,KS
            print("_")
    print(display)
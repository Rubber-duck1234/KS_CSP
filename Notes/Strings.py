"""name = input("What is your name: ").strip().title()

# To sanitize add . and then the thing you need.

print("hello", name + "!")"""

sentance = "the quick brown fox jumps over the lazy dog"
print(sentance)
word = input("Tell me a word form the sentance: ")
new_word = input("Give me a new word: ")
start = sentance.find(word)
lenglth = len(word)
print(sentance. replace(word, new_word))

print(sentance[start:start + lenglth])

"""num_one = int(input("Tell me a number: "))
num_two = int(input("Tell me a number: "))
print(num_one*num_two)"""
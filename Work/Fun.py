name = input("What is your name adventurer: ").strip().capitalize()

print(f"Wellcome {name}!")
direction = input("Do you turn left or right: ").strip().capitalize()
if direction == "Right":
    print("You find a town that seems to be bursting with econamic growth and prosparety.")
else:
    print("You fall down a pit and die.")
# KS, 7th, Time of Day

time = int(input("What is the hour in millitary time: ").strip())
if time >= 8 and time <= 11:
    print("Good morning")
elif time >= 12 and time <= 22:
    print("Good after noon")
elif time >= 23 and time <= 24 or time >0 and time <= 7:
    print("Good evning and good night (also why are you up so late?)")
elif time > 24:
    print("What do you think you are doing?")
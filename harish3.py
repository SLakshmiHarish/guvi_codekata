x="aeiou"
b="bcdfghjklmnopqrstvwxyz"
a=raw_input("x is:")
print(a)
if(a in x):
   print("the letter is vowel")
elif(a in b):
   print("the letter is consnant")
else:
   print("the letter is invalid")

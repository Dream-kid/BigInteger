# taking two inputs at a time 
x, y = input("Enter a two value: ").split() 

for x in range(2, 30, 3):
  print(x)

fruits = ["apple", "banana", "cherry"]
for x in fruits:
  if x == "banana":
    continue
  print(x)

#without new line
print("Good Morning!", end = '')

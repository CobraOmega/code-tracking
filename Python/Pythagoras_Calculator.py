import math

print("**********Pythagoras Calculator**********")
print("Enter the sides of the triangle")
a = float(input("Enter the first side: "))
b = float(input("Enter the second side: "))
c = math.sqrt(a**2 + b**2)
print("The hypotenuse of the triangle is: ", c)
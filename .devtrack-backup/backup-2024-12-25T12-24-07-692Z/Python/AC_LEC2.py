#WAP to check if a number entered by user is odd or even
n = int(input("Enter a number: "))
if(n % 2):
    print("The number is even.")
else:
    print("The number is odd.")

#WAP to find the greatest of 3 numbers entered by the user.
a = float(input("Enter a number: "))
b = float(input("Enter a number: "))
c = float(input("Enter a number: "))
if(a > b and a > c):
    print("The greatest number out of the provided numbers is: ", a)
elif(b > a and b > c):
    print("The greatest number out of the provided numbers is: ", b)
elif(c > a and c > b):
    print("The greatest number out of the provided numbers is: ", c)

#WAP to check if a number is multiple of  or not
a = int(input("Enter a number: "))
if(a % 7 == 0):
    print("The number is multiple of 7.")
else:
    print("The number is not a multiple of 7.")
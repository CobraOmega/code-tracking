print("*************** Basic Calculator ***************")

num1 = float(input("Enter First number: "))
num2 = float(input("Enter Second number: "))
operator = input("Enter Operator(+, -, /, *): ")

if operator == '+':
    print(num1 + num2)

elif operator == '-':
    print(num1 - num2)

elif operator == '/':
    print(num1 / num2)

elif operator == '*':
    print(num1 * num2)
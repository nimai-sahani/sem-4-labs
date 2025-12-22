def add(a,b):
    return a + b

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
num3 = int(input("Enter third number: "))
sum = add(add(num1, num2), num3)
print("The sum of three numbers is:", sum)
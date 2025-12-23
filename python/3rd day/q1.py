import math
a= int(input("Enter a number: "))
b= int(input("Enter another number: "))
c= int(input("Enter one more number: "))
def gcd(a, b):
    while(b):
        a, b = b, a % b
    return a
d = gcd(a, b)
if d ==1:
    print(f"{a} and {b} ")
else:
    print(f"{a} and {b} ")
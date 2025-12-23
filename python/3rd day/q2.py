#solve the following congruence equation 11x ≡ 22 (mod 33)
import math
a = int(input("Enter the value of a = "))   
b = int(input("Enter the value of b = "))   
m = int(input("Enter the value of m = "))
d = math.gcd(a, m)
def gcd(a, b):
    while(b):
        a, b = b, a % b
    return a
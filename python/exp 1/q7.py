def gcd(a, b):
    a = abs(a)
    b = abs(b)
    while b != 0:
        a, b = b, a % b
    return a

def gcd_three(a, b, c):
    return gcd(gcd(a, b), c)
num1 = -42
num2 = -28
num3 = 56
result = gcd_three(num1, num2, num3)
print("GCD of", num1, ",", num2, "and", num3, "is:", result)
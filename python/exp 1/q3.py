def gcd(a, b):
    a = abs(a)
    b = abs(b)
    while b != 0:
        a, b = b, a % b
    return a
print(gcd(38, 14))
print(gcd(88, 68))
print(gcd(105, 25))
print(gcd(225, 75))
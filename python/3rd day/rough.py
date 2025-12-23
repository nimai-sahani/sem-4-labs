a = int(input("Enter the value of a = "))
b = int(input("Enter the value of b = "))
m = int(input("Enter the value of m = "))

# find gcd
def gcd(a,b):
    a,b = abs(a),abs(b)
    while b != 0:
        a,b = b,a%b
    return a
d = gcd(a,m)

# check existance
if(d==1):
    print(f"The equation {a}x={b} (mod {m}) has unique solution.")
elif(b%d==0):
    print(f"The equation {a}x{b} (mod {m}) has {d} solution.")
else:
    print(f"solution of the equation {a}x={b} (mod {m}) does not exist.")
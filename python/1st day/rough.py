def loop(i):
    print(i)
    if i == 10:
        return 0
    loop(i+1)
    return 0

i = 1
loop(i)
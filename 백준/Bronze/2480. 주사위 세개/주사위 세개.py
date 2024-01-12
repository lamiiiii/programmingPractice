a, b, c = map(int, input().split())
if(a != b) and (a != c) and (b != c):
    if a > b:
        max = a
    else:
        max = b
    if max > c:
        max = max
    else:
        max = c
    print(max * 100)
elif(a == b) and (b == c):
    print(10000 + a * 1000)
else:
    if a == b:
        print(1000 + a * 100)
    elif b == c:
        print(1000 + b * 100)
    elif c == a:
        print(1000 + c * 100)
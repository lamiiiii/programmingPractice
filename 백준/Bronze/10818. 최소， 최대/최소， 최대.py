N = int(input())
L = list(map(int, input().split()))
max = L[0]
min = L[0]
if(1 <= N) and (N <= 1000000):
    for i in L:
        if i > max:
            max = i
        if i < min:
            min = i
print(min, max)
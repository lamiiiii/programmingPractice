N, X = map(int, input().split())
if (1 <= N) and (1 <= X) and (N <= 10000) and (X <= 10000):
    arr = list(map(int,input().split()))
    for i in arr:
        if(i < X):
            print(i, end="")
            print(" ", end="")
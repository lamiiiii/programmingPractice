N = int(input())
if(1 <= N) and (N <= 9):
    for i in range(1, 10, +1):
        print(N, "*", i, "=", N * i)

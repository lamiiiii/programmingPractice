A,B = map(int, input().split())
C = int(input())
d = (int)(C / 60)
e = (int)(C % 60)
if (0 <= A) and (A <= 23) and (0 <= B) and (B <= 59) and (0 <= C) and (C <= 1000):
    if B + e > 59:
        if A + d + 1 > 23:
            A = A + d - 23
        else:
            A = A + d + 1
        B = B + e - 60
    else:
        if A + d > 23:
            A = A + d - 24
        else:
            A = A + d
        B = B + e
    print(A, B)
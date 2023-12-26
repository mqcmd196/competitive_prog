import numpy as np

H, W = map(int, input().split())
A = []

for i in range(H):
    a = list(map(int, input().split()))
    A.append(a)

A = np.array(A)

sum_h = np.sum(A, axis=1) # h
sum_w = np.sum(A, axis=0) # w

for i in range(H):
    for j in range(W):
        b = sum_h[i] + sum_w[j] - A[i][j]
        print(b, end=" ")
    print("")


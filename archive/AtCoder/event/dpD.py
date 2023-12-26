N, W = map(int, input().split())
w_v = [list(map(int, input().split())) for l in range(N)]

dp = [[0 for j in range(W+1)] for i in range(N+1)] # [i][weight]

for i in range(1, N):
    for sum_w in range(1, W+1):
        if sum_w - w_v[i][0] >= 0:
            dp[i][sum_w] = max(dp[i-1][sum_w], dp[i-1][sum_w-w_v[i][0]] + w_v[i][1])
        else:
            dp[i][sum_w] = dp[i-1][sum_w]

print(dp)

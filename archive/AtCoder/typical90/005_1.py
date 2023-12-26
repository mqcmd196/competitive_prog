N, B, K = map(int, input().split())
c = list(map(int, input().split()))
mod = 1000000007
# N <= 10000, B <= 30
dp = [[0 for j in range(B+1)] for i in range(N+1)]

for n in range(N+1):
    for b in range(B+1):
        for k in range(1, K+1):
            ne = 10 * b + c[k] % B
            dp[n+1][ne] += dp[i][j]
            dp[n+1][ne] %= mod;

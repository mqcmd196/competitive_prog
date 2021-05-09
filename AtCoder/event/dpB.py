N, K = map(int, input().split())
h = list(map(int, input().split()))
dp = [0, abs(h[1] - h[0])]

for i in range(2, N):
    cost_list = []
    for j in range(min(K, len(dp))):
        cost_list.append(dp[i-(j+1)] + abs(h[i] - h[i-(j+1)]))
    dp.append(min(cost_list))

print(dp[N-1])

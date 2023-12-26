import copy

N = int(input())
h = [list(map(int, input().split())) for l in range(N)]

# Initialize
dp = [h[0]]

# choice = [0, 1, 2]
# for i in range(1, N):
#     print(choice[2])
#     dp.append([0, 0, 0])
#     for j in range(3):
#         if choice[j] == 0:
#             if h[i][1] > h[i][2]:
#                 choice[j] = 1
#                 larger = h[i][1]
#             else:
#                 choice[j] = 2
#                 larger = h[i][2]
#             dp[i][j] = dp[i-1][j] + larger
#         elif choice[j] == 1:
#             if h[i][0] > h[i][2]:
#                 choice[j] = 0
#                 larger = h[i][0]
#             else:
#                 choice[j] = 2
#                 larger = h[i][2]
#             dp[i][j] = dp[i-1][j] + larger
#         else:
#             if h[i][0] > h[i][1]:
#                 choice[j] = 0
#                 larger = h[i][0]
#             else:
#                 choice[j] = 1
#                 larger = h[i][1]
#             dp[i][j] = dp[i-1][j] + larger

for i in range(1, N):
    dp.append([0, 0, 0])
    for j in range(3):
        dp_copy = copy.deepcopy(dp[i-1])
        dp_copy.pop(j)
        dp[i][j] = max(dp_copy) + h[i][j]

print(max(dp[-1]))


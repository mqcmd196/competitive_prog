N, L = map(int, input().split())
K = int(input())
A = list(map(int,input().split()))

def get_score(N, K, A, L, M):
# 長さM以上のピースにカット可能かどうか判定
    # print("M is " + str(M))
    prev = 0
    cut_count = 0
    for i in range(N):
        if A[i] - prev >= M:
            prev = A[i]
            cut_count += 1
            # print(prev)
            if cut_count == K: # カットの回数がK回になったらforループ中止
                break
    if L - prev < M: # 最後のほうでカットが失敗していたらFalse
        # print("last cut fail")
        return False
    if cut_count < K: # カットの回数がK回未満だったらFalse
        # print("cut < K")
        return False
    else:
        # return min_length
        return True

# Binary search
# https://qiita.com/drken/items/97e37dd6143e33a64c8c
left = -1
right = L + 1
score = float('inf')
while (right - left) > 1:
    mid = left + int((right - left) / 2)
    if not get_score(N, K, A, L, mid):
        right = mid
    else:
        left = mid
print(left)
    

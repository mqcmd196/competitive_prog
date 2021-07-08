import queue
import numpy as np

N = int(input())
A = []
B = []
for i in range(N-1):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)

def bfs(N, A, B, start):
    q = queue.Queue() # discovered but not visited
    dist = np.full(N+1, -1) # step of v, -1 means not discovered
    dist[start] = 0
    q.put(start)
    
    while not q.empty():
        v = q.get()
        for i in range(N-1):
            if A[i] == v:
                nv = B[i]
                if dist[nv] != -1: # already discovered
                    pass
                else:
                    dist[nv] = dist[v] + 1;
                    q.put(nv)
            if B[i] == v:
                nv = A[i]
                if dist[nv] != -1: # already discovered
                    pass
                else:
                    dist[nv] = dist[v] + 1;
                    q.put(nv)

    max_index = np.argmax(dist)
    max_dist = dist[max_index]
    
    return max_index, max_dist

most_far_from_a1 = bfs(N, A, B, A[0])[0]
e = bfs(N, A, B, most_far_from_a1)[1]

print(e + 1)

from sys import stdin
input = stdin.readline

R, C = map(int, input().split())
sy, sx = map(int, input().split())
gy, gx = map(int, input().split())
c = [0 for _ in range(R)]
for i in range(R):
    c[i] = input().split()[0]

sy -= 1
sx -= 1
gy -= 1
gx -= 1

def visit_child(c, y, x, R, C, visited):
    if (0<= y+1 <= R) and visited[y+1][x]==False and c[y+1][x] == '.':
        return [y+1, x]
    elif (0<= y-1 <= R) and visited[y-1][x]==False and c[y-1][x] == '.':
        return [y-1, x]
    elif (0<= x+1 <= C) and visited[y][x+1]==False and c[y][x+1] == '.':
        return [y, x+1]
    elif (0<= x-1 <= C) and visited[y][x-1]==False and c[y][x-1] == '.':
        return [y, x-1]
    else:
        return False

def bfs(c, start, goal, R, C):
    queue = []
    visited = [[False for _ in range(C)] for _ in range(R)]
    visited[start[0]][start[1]] == True
    queue.append(start)

    while len(queue) != 0:
        node = queue[0]
        if node == goal:
            return queue
        else:
            child = visit_child(c, node[0], node[1], R, C, visited)
            if child == False:
                queue.pop(0)
            else:
                visited[child[0]][child[1]] = True
                queue.insert(0, child)

result = bfs(c, [sy, sx], [gy, gx], R, C)
print(result)
print(len(result) - 1)
from sys import stdin
input = stdin.readline

h, w = map(int, input().split())
c = [0 for _ in range(h)]
for i in range(h):
    c[i] = input().split()[0]

def visit_child(c, x, y, h, w, seen):
    if (0 <= x+1 <= h-1) and (0 <= y <= w-1) and c[x+1][y] != '#' and seen[x+1][y] == False:
        return [x+1, y]
    elif (0 <= x-1 <= h-1) and (0 <= y <= w-1) and c[x-1][y] != '#' and seen[x-1][y] == False:
        return [x-1, y]
    elif (0 <= x <= h-1) and (0 <= y+1 <= w-1) and c[x][y+1] != '#' and seen[x][y+1] == False:
        return [x, y+1]
    elif (0 <= x <= h-1) and (0 <= y-1 <= w-1) and c[x][y-1] != '#' and seen[x][y-1] == False:
        return [x, y-1]
    else:
        return False


def dfs(start, goal, c, h, w):
    stack = []
    seen = [[False for _ in range(w)] for _ in range(h)]
    seen[start[0]][start[1]] == True
    stack.append(start)

    while len(stack) != 0:
        node = stack[-1]
        if node == goal:
            return stack
        else:
            child = visit_child(c, node[0], node[1], h, w, seen)
            if child == False:
                stack.pop()
            else:
                seen[child[0]][child[1]] = True
                stack.append(child)


for i in range(h):
    for j in range(w):
        if c[i][j] == 's':
            start = [i, j]
        elif c[i][j] == 'g':
            goal = [i, j]

result = dfs(start, goal, c, h, w)

if result == None:
    print('No')
else:
    print('Yes')

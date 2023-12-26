H, W = map(int, input().split())
c = [input() for l in range(H)]

seen = [[False for i in range(W)] for j in range(H)]
todo = []

# [y, x]
for i in range(H):
    for j in range(W):
        if c[i][j] == 's':
            seen[i][j] = True
            todo.append([i, j])
        elif c[i][j] == 'g':
            goal = [i, j]

# Generate graph from input
dy = [0, 1, 0, -1]
dx = [1, 0, -1, 0]

pos = todo[0]
flag = False

while True:
    # print(pos)
    # update seen and todo
    for k in range(4):
        new_y = pos[0]+dy[k]
        new_x = pos[1]+dx[k]
        if (new_y >= 0 and new_y < H) and (new_x >= 0 and new_x < W):
            # update seen stack
            if c[new_y][new_x] == '.' and seen[new_y][new_x] == False:
                seen[new_y][new_x] = True
                todo.append([new_y, new_x])
            elif c[new_y][new_x] == 'g':
                print('Yes')
                flag = True
    # change position
    if flag:
        break
    elif len(todo) == 0:
        print('No')
        break
    else:
        pos = todo.pop()


from collections import deque

R, C = map(int, input().split())
sy, sx = map(int, input().split())
gy, gx = map(int, input().split())
c_orig = [input() for l in range(R)]
c = []

for string in c_orig:
    c.append(list(string))

sy -= 1
sx -= 1
gy -= 1
gx -= 1

todo = deque([])

c[sy][sx] = 0

dy = [0, 1, 0, -1]
dx = [1, 0, -1, 0]

flag = False

# initial pos
todo.append([sy, sx, 0])
pos = todo[0]

while True:
    for k in range(4):
        new_y = pos[0] + dy[k]
        new_x = pos[1] + dx[k]
        new_step = pos[2] + 1
        if (new_y >= 0 and new_y < R) and (new_x >= 0 and new_x < C):
            if (new_y == gy) and (new_x == gx):
                flag = True
            elif c[new_y][new_x] == '.':
                c[new_y][new_x] = new_step
                todo.append([new_y, new_x, new_step])
    # print(todo)

    if flag:
        print(new_step)
        break
    elif len(todo) == 0:
        print('0')
        break
    else:
        pos = todo.popleft()
        

import copy

A_orig = [list(input()) for l in range(10)]

sea_filled = [] # [y, x, True or False]
land_counter = 0
for i in range(10):
    for j in range(10):
        if A_orig[i][j] == 'x':
            sea_filled.append([i, j, False])
        elif A_orig[i][j] == 'o':
            land_counter += 1

dy = [0, 1, 0, -1]
dx = [1, 0, -1, 0]
flag = False

# print(land_counter)

# MAIN LOOP
for sea_fill in sea_filled:
    if not flag:
        A = copy.deepcopy(A_orig)
        A[sea_fill[0]][sea_fill[1]] = 'o'
        seen = [[False for i in range(10)] for j in range(10)]
        todo = []
        passed = 0
        
        pos = [sea_fill[0], sea_fill[1]]
        todo.append(pos)
        
        while True:
            for k in range(4):
                new_y = pos[0] + dy[k]
                new_x = pos[1] + dx[k]
                if (new_y >= 0 and new_y < 10) and (new_x >= 0 and new_x < 10):
                    if A[new_y][new_x] == 'o' and (not seen[new_y][new_x]):
                        seen[new_y][new_x] = True
                        todo.append([new_y, new_x])
                        passed += 1
                        # print(passed)
                        if passed == land_counter + 1:
                            flag = True
                            break
            if flag:
                break
            elif len(todo) == 0:
                break # next sea_filling
            else:
                pos = todo.pop()

    else:
        print('YES')
        break

if not flag:
    print('NO')
    

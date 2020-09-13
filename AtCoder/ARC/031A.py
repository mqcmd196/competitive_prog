from sys import stdin
input = stdin.readline

a = [0 for _ in range(10)]
for i in range(10):
    a[i] = input().split()[0]

def visit_child(a, x, y, visited):
    if (0<= x+1 <= 9) and visited[x+1][y] == False and a[x+1][y] == 'o':
        return [x+1, y]
    elif (0<= x-1 <= 9) and visited[x-1][y] == False and a[x-1][y] == 'o':
        return [x-1, y] 
    elif (0<= y+1 <= 9) and visited[x][y+1] == False and a[x][y+1] == 'o':
        return [x, y+1]
    elif (0<= y-1 <= 9) and visited[x][y-1] == False and a[x][y-1] == 'o':
        return [x, y-1]
    else:
        return False


def search(a, start):
    visited_counter = 0
    stack = []
    visited = [[False for _ in range(10)] for _ in range(10)]
    stack.append(start)

    while len(stack) != 0:
        node = stack[-1]
        child = visit_child(a, node[0], node[1], visited)
        if child == False:
            stack.pop()
        else:
            visited[child[0]][child[1]] = True
            stack.append(child)
            visited_counter += 1
    
    return visited_counter


num_o = 0
for i in range(10):
    for j in range(10):
        if a[i][j] == 'o':
            num_o += 1


one_island = False

# xから探索開始．visited_counterがoの数だったらOK
for i in range(10):
    for j in range(10):
        if a[i][j] == 'x':
            counter = search(a, [i, j])
            # print(i, j, counter)
            if num_o == counter:
                print('YES')
                one_island = True
                break

if not one_island:
    print('NO') 
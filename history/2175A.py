def solve(n, v):
    vis = [0] * 10000
    cur = 0
    for i in v:
        if vis[i] == 0:
            cur += 1
            vis[i] = 1
    
    while True:
        if vis[cur] == 0:
            vis[cur] = 1
            cur += 1
        else:
            break
    print(cur)


for _ in range(int(input())):
    n = int(input())
    v = map(int, input().split())
    solve(n, v)

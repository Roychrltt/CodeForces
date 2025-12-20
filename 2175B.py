for _ in range(int(input())):
    n, l, r = map(int, input().split())
    ls = [0]
    for i in range(1, n + 1):
        ls.append(i)
    ls[r] = l - 1
    ans = []
    for i in range(1, n + 1):
        ans.append(ls[i] ^ ls[i - 1])
    for i in ans:
        print(i, end = " ")
    print()

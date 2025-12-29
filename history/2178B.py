for _ in range(int(input())):
    s = input()
    n = len(s)
    s = list(s)

    cnt = 1 if s[0] == 'u' else 0
    s[0] = 's'

    for i in range(1, n):
        if s[i] == 'u' and s[i - 1] == 'u':
            cnt += 1
            s[i] = 's'

    if s[n - 1] == 'u':
        cnt += 1

    print(cnt)

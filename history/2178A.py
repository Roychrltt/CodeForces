for _ in range(int(input())):
    s = input()
    x = s.count('Y')
    if x <= 1:
        print("YES")
    else:
        print("NO")

#https://codeforces.com/problemset/problem/1374/C


t = int(input())
for j in range(t):
    n = int(input())
    s = input()

    while "()" in s:
        a = s.index("()")
        s = s[:a] + s[a+2:]
    c = 0
    while ")(" in s:
        a = s.index(")(")
        s = s[:a] + s[a+2:]
        c+=1
    print(c)
    
    pass


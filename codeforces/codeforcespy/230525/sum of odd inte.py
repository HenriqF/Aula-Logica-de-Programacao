t = int(input())
for j in range(t):
    n, k = map(int, input().split())

    if k*k <= n and n%2 == k%2:
        print("YES")
    else:
        print("NO")
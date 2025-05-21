while (True):
    n, m = input().split()
    d = list(map(int, input().split()))
    n = int(n)
    m = int(m)

    for i in range(n):
        if (d[i]) > m-d[i]:
            d[i] = m-d[i]
        if i != 0 and d[i] < d[i-1]:
            d[i] = m-d[i]

    print(sum(d)) if d == sorted(d) else print(-1)

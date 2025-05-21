while (True):
    n = int(input())
    camisas = list(map(int, input().split()))
    p = int(input())
    m = int(input())

    np = 0
    nm = 0

    for i in range(n):
        if camisas[i] == 1:
            np+=1
        else:
            nm+=1
    

    if np <= p and nm <= m:
        print("S")
    else:
        print("N")
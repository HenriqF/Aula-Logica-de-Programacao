n = int(input())

for i in range(n):
    stri = input()
    if len(stri) > 10:
        m = stri[0]+str(len(stri[1:-1]))+stri[-1]
        print(m)
    else:
        print(stri)

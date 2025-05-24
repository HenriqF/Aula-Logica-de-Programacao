#https://codeforces.com/problemset/problem/1353/C
# 3 = (8*1)
# 5 = (16*2)+(8*1)
#7=(24*3)+(16*2)e ai vai porra cansei de escrever essa porra é nois agradeco deste entao e etcetera..

t = int(input())
for i in range(t):
    n = int(input())

    def moves(n):
        if n == 1:
            return(0)
        elif n == 3:
            return(8)
        else:
            count = 8
            mult = 2
            while n > 3:
                count += (8*mult*mult)
                mult += 1
                n -= 2
            return(count)


    print(moves(n))
    pass
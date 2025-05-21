n = int(input())

maxi = float("-inf")
mini = float("+inf")
for i in range(n):
    c = int(input())
    maxi = max(maxi, c)
    mini = min(mini,c)

print(maxi)
print(mini)
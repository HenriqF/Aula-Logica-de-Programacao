volmin = int(input())
volmax = int(input())
capacidade = int(input())
voldoses = int(input())

i=1
while voldoses*i < capacidade:
    c = capacidade-(voldoses*i)
    if c >= volmin and c <= volmax:
        print("S")
        quit()
    i += 1
print("N")


n = int(input())
for j in range(n):
 
    beat = input()
    sound = input()
 
    def validate(beat, sound):
        if len(beat) > len(sound):
            return("NO")
        if beat == sound:
            return("YES")
        
        c = 1
        intervalB = []
        for i in range(1, len(beat)):
            if beat[i] == beat[i-1]:
                c += 1
            else:
                intervalB.append([c, beat[i-1]])
                c = 1
        intervalB.append([c, beat[-1]])
        c=1
        intervalS = []
        for i in range(1, len(sound)):
            if sound[i] == sound[i-1]:
                c += 1
            else:
                intervalS.append([c, sound[i-1]])
                c = 1
        intervalS.append([c, sound[-1]])

        while intervalB != []:
            if len(intervalS) == len(intervalB) and intervalS[0][0] >= intervalB[0][0] and intervalS[0][0] <= intervalB[0][0]*2 and intervalS[0][1] == intervalB[0][1]:
                intervalS.pop(0)
                intervalB.pop(0)
            else:
                return("NO")

        return("YES")

    print(validate(beat, sound))
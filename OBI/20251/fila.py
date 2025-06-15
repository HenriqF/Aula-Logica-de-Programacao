leng = int(input())
alunos = list((map(int , input().split())))


# stack = []
# i = 0
# for aluno in alunos:
#     stack.append(aluno)
#     if len(stack) >= 2 and i+1 < len(stack):
#         if stack[i] >= stack[i+1]:
#             stack.pop(i+1)
#         else:
#             i += 1

# print(leng - len(stack))

#tava fumando crack na hora, ai vai 2 coisas melhor.
# i = leng
# while i > 0:
#     if i+1 < len(alunos) and alunos[i+1] >= alunos[i]:
#         alunos.pop(i)
#     else:
#         i-=1
# print(alunos)

stack = []

for aluno in alunos[::-1]: 
    if not stack or aluno > stack[-1]:
        stack.append(aluno)

print(leng - len(stack))

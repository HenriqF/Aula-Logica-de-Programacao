leng = int(input())
nums = list(map(int, input().split()))

h = max(nums)

while h > 0:
    for num in nums[:-1]:
        print(1, end=" ") if num >= h else print(0, end=" ")
    print(1, end="") if nums[-1] >= h else print(0, end="")
    print("")
            
    h-=1


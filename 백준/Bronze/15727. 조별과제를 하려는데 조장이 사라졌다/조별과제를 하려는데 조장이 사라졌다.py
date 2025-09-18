n = int(input())
steps = [5,4,3,2,1]
cnt = 0

for step in steps:
    cnt += n//step
    n %= step

print(cnt)
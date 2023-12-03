from math import sqrt

arr = []
max = 0
while True:
    arr.append(int(input()))
    if arr[-1] == 0: break
    elif arr[-1] > max: max = arr[-1]

num = [i for i in range(2 * max + 1)]
n = int(sqrt(2 * max))
for i in range(2, n + 1):
    for j in range(2 * i, 2 * max + 1, i):
        num[j] = -1

for i in range(len(arr) - 1):
    cnt = 0
    for j in range(arr[i] + 1, arr[i] * 2 + 1):
        if num[j] != -1: cnt+=1
    print(cnt)


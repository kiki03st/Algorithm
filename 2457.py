n = int(input())

arr = []

month_day = 0
len_month, len_day = 0, 0
dic_start = dict()
dic_end = dict()
start = [0, 0, 0, 0]

for i in range(n):
    arr.append(list(map(int, input().split())))
    if (arr[i][0] == 3 and arr[i][1] == 1) or arr[i][0] < 3:
        if (arr[i][2] - 3 == len_month and arr[i][3] - 1 > len_day) or arr[i][2] - 3 > len_month:
            len_month = arr[i][0] - 3
            len_day = arr[i][1] - 1
            month_day = arr[i][2] * 100 + arr[i][3]
            start = arr[i]

arr = sorted(arr)
print(arr)
k = 0

for i in range(n):
    cnt = 0
    for j in range(4):
        if arr[i][j] == start[j]: cnt+=1
    if cnt == 4:
        k = i + 1
        break

length = 1
tmp_index = 0
tmp_value = 0

while month_day < 1130:
    print(arr[k:])
    print(month_day)
    for i in range(k, n):
        if arr[i][0] * 100 + arr[i][1] <= month_day and arr[i][2] * 100 + arr[i][3] >= month_day:
            tmp_value = arr[i][2] * 100 + arr[i][3]
        if arr[i][0] * 100 + arr[i][1] < tmp_value: tmp_index = i + 1
    month_day = tmp_value
    length += 1
    k = tmp_index

print(length)

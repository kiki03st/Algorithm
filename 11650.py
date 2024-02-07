n = int(input())
arr = dict()
for i in range(n):
    x, y = map(int, input().split())
    if x not in arr:
        arr[x] = []
    arr[x].append(y)
arr = dict(sorted(arr.items()))
for i in arr.keys():
	arr[i].sort()
	for j in range(len(arr[i])):
		print(i, arr[i][j])

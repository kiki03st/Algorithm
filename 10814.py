def compare(p):
	return int(p[0])

n = int(input())
arr = []
for i in range(n):
	arr.append(input().split())
arr = sorted(arr, key = lambda x : compare(x))
for i in range(n):
	print(" ".join(arr[i]))

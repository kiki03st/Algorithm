a, b = map(int, input().split())
arr = ["" for _ in range(a + 1)]
for i in range(a):
	arr[i + 1] = input()
dic = dict()
for i in range(1, a + 1):
	dic[arr[i]] = i
for i in range(b):
	n = input()
	if ord('1') <= ord(n[0]) <= ord('9'):
		print(arr[int(n)])
	else:
		print(dic[n])

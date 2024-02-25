n = int(input())
arr = list(map(int, input().split()))
p = sorted(list(set(arr)))
dic = dict()
for i in range(len(p)):
	dic[p[i]] = i
for i in arr:
	print(dic[i], end = " ")

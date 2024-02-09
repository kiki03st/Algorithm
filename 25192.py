n = int(input())
arr = []
result = 0
for i in range(n):
	line = input()
	if line != "ENTER":
		arr.append(line)
	else:
		result += len(set(arr))
		arr = []
result += len(set(arr))
print(result)

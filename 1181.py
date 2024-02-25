import sys
def compare(p):
	n = len(p)
	i = 1
	s = 0
	while i <= n:
		s += ord(p[-i]) * (10 ** (i - 1))
		i += 1
	return s

n = int(sys.stdin.readline().rstrip())
arr = []
for i in range(n):
    arr.append(sys.stdin.readline().rstrip())
arr = list(set(arr))
arr = sorted(arr, key = lambda x : compare(x))
print("\n".join(arr))

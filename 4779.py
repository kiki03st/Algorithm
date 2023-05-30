def solution(x):
    if len(x) == 1: return x;
    return solution(x[:int(len(x)/3)]) + " " * int(len(x) / 3) + solution(x[int(len(x)/3*2):])
while True:
    try:
        x = int(input())
        arr = '-' * (3 ** x)
        print(solution(arr))
    except:
        break

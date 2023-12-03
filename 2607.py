n = int(input())
word = input()
word_arr = [0 for _ in range(26)]
for i in range(len(word)):
    word_arr[ord(word[i]) - ord('A')] += 1
for i in range(n - 1):
    line = input()
    

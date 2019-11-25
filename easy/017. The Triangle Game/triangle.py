words = list(input())

for i in range(len(words)):
    for length in range(i+1):
        print(words[length], end='')
    print('')

digit = input()
reverse_num = ''

for d in reversed(digit):
    reverse_num += d

print(int(reverse_num))
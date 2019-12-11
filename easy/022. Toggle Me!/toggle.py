str = input()
toggle = ""

for i in range(len(str)):
    toggle += str[i].lower() if str[i].isupper() else str[i].upper()


print(toggle)
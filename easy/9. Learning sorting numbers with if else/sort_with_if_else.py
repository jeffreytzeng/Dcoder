numbers = list(map(int, input().split()))

if numbers[0] > numbers[1]:
    numbers[0], numbers[1] = numbers[1], numbers[0]

    if numbers[1] > numbers[2]:
        numbers[1], numbers[2] = numbers[2], numbers[1]

        if numbers[0] > numbers[1]:
            numbers[0], numbers[1] = numbers[1], numbers[0]
else:
    if numbers[1] > numbers[2]:
        numbers[1], numbers[2] = numbers[2], numbers[1]

        if numbers[0] > numbers[1]:
            numbers[0], numbers[1] = numbers[1], numbers[0]


print(' '.join(map(str, numbers)))
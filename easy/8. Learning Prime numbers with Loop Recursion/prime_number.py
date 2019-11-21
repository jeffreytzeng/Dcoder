numbers = list(map(int, input().split()))

prime_numbers = []
for number in range(numbers[0], numbers[1] + 1):
    prime = True
    if number != 1:
        for num in range(2, number):
            if number % num == 0:
                prime = False
                break

        if prime:
            prime_numbers.append(number)

for number in prime_numbers:
    print(number)
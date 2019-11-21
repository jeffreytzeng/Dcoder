cards = list(map(int, input().split()))

if cards[0] == 11:
    cards[0] = 1
if cards[1] == 11:
    cards[1] = 1

blackjack = sum(cards)
print(0 if blackjack > 21 else blackjack) 
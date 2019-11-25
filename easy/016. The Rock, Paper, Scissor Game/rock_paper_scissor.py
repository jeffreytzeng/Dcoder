turns = int(input())

competes = list(input())

for turn in range(0, turns*2, 2):
    if competes[turn] == competes[turn+1]:
        print("Draw")
    elif competes[turn] == 'R':
        print("Dcoder" if competes[turn+1] == 'S' else "You")
    elif competes[turn] == 'P':
        print("Dcoder" if competes[turn+1] == 'R' else "You")
    else:
        print("Dcoder" if competes[turn+1] == "P" else "You")
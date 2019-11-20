import math

coordinates = list(map(int, input().split()))

dist_A = math.sqrt(coordinates[0]**2 + coordinates[1]**2)
dist_B = math.sqrt(coordinates[2]**2 + coordinates[3]**2)

print('A' if dist_B > dist_A else 'B')
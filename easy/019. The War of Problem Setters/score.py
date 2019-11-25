garry = list(map(int, input().split()))
sharry = list(map(int, input().split()))
garry_get = 0
sharry_get = 0

for score in range(len(garry)):
    garry_get += garry[score]
    sharry_get += sharry[score]

if garry_get == sharry_get:
    print("None 0")
else:
    print("Garry " + str(garry_get - sharry_get) \
          if garry_get > sharry_get \
          else "Sharry " + str(sharry_get - garry_get))
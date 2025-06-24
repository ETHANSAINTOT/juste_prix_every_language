# Python version

import random

prix_random = random.randint(1, 100)
print(prix_random) #comment this line

while 1:
    prix_user = int(input("Quel prix"))

    if (prix_user == prix_random):
        print("Bien joué")
        break
    elif (prix_user < prix_random):
        print("C'est plus")
    else:
        print("C'est moins")

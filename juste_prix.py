#Python version

import random

prix_random = random.randint(1, 100)
print(prix_random)
tentatives = 0
print("Devinez un nombre entre 1 et 100 !")
while True:
    tentatives += 1
    try:
        prix_user = int(input(f"Tentative {tentatives} - Quel prix ? "))
        if prix_user == prix_random:
            print(f"Bien joué ! Vous avez trouvé en {tentatives} tentative(s) !")
            break
        elif prix_user < prix_random:
            print("C'est plus")
        else:
            print("C'est moins")   
    except ValueError:
        print("Erreur : Veuillez entrer un nombre valide ! (Cette tentative compte)")
        continue
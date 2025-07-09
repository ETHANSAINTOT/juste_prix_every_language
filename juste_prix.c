// C version

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int random_price = rand() % 100 + 1;
    printf("Le prix est %d\n", random_price);
    int tentatives = 0;
    printf("Devinez un nombre entre 1 et 100 !\n");
    while (1) {
        tentatives++;
        int price_user;
        printf("Tentative %d - Quel prix: ", tentatives);
        if (scanf("%d", &price_user) != 1) {
            printf("Erreur : Veuillez entrer un nombre valide ! (Cette tentative compte)\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }
        if (price_user == random_price) {
            printf("Bien joué ! Vous avez trouvé en %d tentative(s) !\n", tentatives);
            break;
        } else if (price_user < random_price) {
            printf("C'est plus\n");
        } else {
            printf("C'est moins\n");
        }
    }
    return 0;
}
//C version

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    srand(time(NULL));
    int random_price = rand() % (100 - 1 + 1) + 1;
    printf("Le prix est %d\n", random_price);

    while (1) {
        int price_user;
        printf("Quel prix: ");
        scanf("%d", &price_user);

        if (price_user == random_price) {
            printf("Bien joue\n");
            break;
        } else if (price_user < random_price) {
            printf("C'est plus\n");
        } else {
            printf("C'est moins\n");
        }
    }
}

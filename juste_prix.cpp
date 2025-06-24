//C++ Version

#include <iostream>
#include <random>
#include <stdio.h>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 100);
    int random_price = distrib(gen);
    printf("Le prix est de %d\n", random_price);

    while (true) {
        int price_user;
        std::cout << "Quel est votre prix ? ";
        std::cin >> price_user;
        if (!std::cin) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrée invalide. Veuillez entrer un nombre entier.\n";
            continue;
        }
        if (price_user == random_price) {
            std::cout << "Bien joué !\n";
            break;
        } else if (price_user < random_price) {
            std::cout << "C'est plus.\n";
        } else {
            std::cout << "C'est moins.\n";
        }
    }
    return 0;
}

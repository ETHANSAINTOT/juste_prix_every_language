// C++ version

#include <iostream>
#include <random>
#include <string>
#include <limits>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 100);
    int random_price = distrib(gen);
    std::cout << "Le prix est de " << random_price << std::endl;
    int tentatives = 0;
    std::cout << "Devinez un nombre entre 1 et 100 !" << std::endl;
    while (true) {
        tentatives++;
        int price_user;
        std::cout << "Tentative " << tentatives << " - Quel est votre prix ? ";
        if (!(std::cin >> price_user)) {
            std::cout << "Erreur : Veuillez entrer un nombre valide ! (Cette tentative compte)" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (price_user == random_price) {
            std::cout << "Bien joué ! Vous avez trouvé en " << tentatives << " tentative(s) !" << std::endl;
            break;
        } else if (price_user < random_price) {
            std::cout << "C'est plus." << std::endl;
        } else {
            std::cout << "C'est moins." << std::endl;
        }
    }
    return 0;
}
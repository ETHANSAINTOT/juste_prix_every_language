// Java version améliorée

import java.util.Scanner;
import java.util.InputMismatchException;

class Main {
    public static void main(String[] args) {
        int random_price = (int)(Math.random() * 100) + 1;
        System.out.println(random_price);
        Scanner scanner = new Scanner(System.in);
        int tentatives = 0;
        System.out.println("Devinez un nombre entre 1 et 100 !");
        while (true) {
            tentatives++;
            System.out.print("Tentative " + tentatives + " - Quel prix : ");
            try {
                int price = scanner.nextInt();
                if (price == random_price) {
                    System.out.println("Bien joué ! Vous avez trouvé en " + tentatives + " tentative(s) !");
                    break;
                } else if (price < random_price) {
                    System.out.println("Ca vaut plus");
                } else {
                    System.out.println("Ca vaut moins");
                }
            } catch (InputMismatchException e) {
                System.out.println("Erreur : Veuillez entrer un nombre valide ! (Cette tentative compte)");
                scanner.nextLine();
            }
        }
        scanner.close();
    }
}
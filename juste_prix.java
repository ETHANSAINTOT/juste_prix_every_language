// Java version

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int random_price = (int)(Math.random() * 99) + 1;
        System.out.println(random_price);

        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.print("Quel prix : ");
            int price = scanner.nextInt();
            
            if (price == random_price) {
                System.out.println("Bien joue");
                break;
            } else if (price < random_price) {
                System.out.println("Ca vaut plus");
            } else {
                System.out.println("Ca vaut moins");
            }
        }
        scanner.close();
    }
}

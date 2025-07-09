// Rust version

use std::io;
use rand::Rng;

fn main() {
    let mut rng = rand::thread_rng();
    let random_price: i32 = rng.gen_range(1..=100);
    println!("{}", random_price);
    let mut tentatives = 0;
    println!("Devinez un nombre entre 1 et 100 !");
    loop {
        tentatives += 1;
        println!("Tentative {} - Quel prix :", tentatives);
        let mut input = String::new();
        io::stdin()
            .read_line(&mut input)
            .expect("Erreur lors de la lecture");
        let user_price: i32 = match input.trim().parse() {
            Ok(num) => num,
            Err(_) => {
                println!("Erreur : Veuillez entrer un nombre valide ! (Cette tentative compte)");
                continue;
            }
        };
        if user_price == random_price {
            println!("Bien joué ! Vous avez trouvé en {} tentative(s) !", tentatives);
            break;
        } else if user_price < random_price {
            println!("C'est plus");
        } else {
            println!("C'est moins");
        }
    }
}
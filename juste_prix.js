// JavaScript version

let prix_random = Math.floor(Math.random() * 100) + 1;
console.log(prix_random);
let tentatives = 0;
console.log("Devinez un nombre entre 1 et 100 !");
while (true) {
    tentatives++;
    let user_price = prompt(`Tentative ${tentatives} - Quel prix ?`);
    let user_price_int = parseInt(user_price);
    if (isNaN(user_price_int)) {
        console.log("Erreur : Veuillez entrer un nombre valide ! (Cette tentative compte)");
        continue;
    }
    if (user_price_int == prix_random) {
        console.log(`Bien joué ! Vous avez trouvé en ${tentatives} tentative(s) !`);
        break;
    } else if (user_price_int < prix_random) {
        console.log("C'est plus");
    } else {
        console.log("C'est moins");
    }
}

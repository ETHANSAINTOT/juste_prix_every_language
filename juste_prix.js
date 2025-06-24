let prix_random = Math.floor(Math.random() * 101);
console.log(prix_random);

while (1) {
    let user_price = prompt("Quel prix");
    let user_price_int = parseInt(user_price);
    if (user_price_int == prix_random) {
        console.log("Bien joue");
        break;
    } else if  (user_price_int < prix_random) {
        console.log("C'est plus");
    } else {
        console.log("C'est moins");
    }
}

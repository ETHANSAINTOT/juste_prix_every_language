// Node.js version 

const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
let prix_random = Math.floor(Math.random() * 100) + 1;
console.log(prix_random);
let tentatives = 0;
console.log("Devinez un nombre entre 1 et 100 !");
function demanderPrix() {
  tentatives++;
  rl.question(`Tentative ${tentatives} - Quel prix ? `, function(user_price) {
    let user_price_int = parseInt(user_price);
    if (isNaN(user_price_int)) {
      console.log("Erreur : Veuillez entrer un nombre valide ! (Cette tentative compte)");
      demanderPrix();
      return;
    }
    if (user_price_int === prix_random) {
      console.log(`Bien joué ! Vous avez trouvé en ${tentatives} tentative(s) !`);
      rl.close();
    } else if (user_price_int < prix_random) {
      console.log("C'est plus");
      demanderPrix();
    } else {
      console.log("C'est moins");
      demanderPrix();
    }
  });
}
demanderPrix();

//Node js version

const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let prix_random = Math.floor(Math.random() * 101);
console.log(prix_random);

function demanderPrix() {
  rl.question("Quel prix ? ", function(user_price) {
    let user_price_int = parseInt(user_price);

    if (user_price_int === prix_random) {
      console.log("Bien joué !");
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

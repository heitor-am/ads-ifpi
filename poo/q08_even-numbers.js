// Include the prompt-sync module
const input = require('prompt-sync')();

function main() {
  const array = [];
  let number;

  for (let i = 1; i <= 20; i++) {
    // Read the user's input
    number = parseInt(input(`Digite o ${i}° número (inteiro): `));
    array.push(number);
  }

  let amount = 0;
  array.forEach((n) => {
    if (n % 2 === 0) amount++;
  });

  console.log(`\nQuantidade de números pares: ${amount}`);
}

main(); 
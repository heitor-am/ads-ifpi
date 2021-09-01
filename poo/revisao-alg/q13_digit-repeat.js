// Include the prompt-sync module
const input = require('prompt-sync')();

function main() {
  // Read the user's input
  const n = Number(input("Informe o número: ")),
    d = Number(input("Dígito desejado: "));

  const result = count(n, d);

  console.log(`\nO dígito ${d} aparece ${result} vezes!`);
}

main();


function count(n, d) {
  const array = n.toString().split("");
  let amount = 0;

  for (element of array) {
    if (parseInt(element) === d) amount++;
  }
 
  return amount;
}
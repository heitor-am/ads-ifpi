// Include the prompt-sync module
const input = require('prompt-sync')();

function main() {
  let number, sum = 0, amount = 0;

  while (number !== -1) {
    // Read the user's input
    number = parseInt(input("Digite um número inteiro: "));

    if (number !== -1) {
      sum += number;
      amount++;
    }
  }

  const average = sum / amount;

  console.log(`\nSoma: ${sum}`);
  console.log(`Média: ${average.toFixed(2)}`);
}

main();
// Include the prompt-sync module
const input = require('prompt-sync')();

function main() {
  // Read the user's input
  const number = Number(input("Informe o número: "));

  console.log(`\nAntecessor: ${number - 1}`);
  console.log(`Sucessor: ${number + 1}`);
}

main();
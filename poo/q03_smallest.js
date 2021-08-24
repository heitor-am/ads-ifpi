// Include the prompt-sync module
const input = require('prompt-sync')();

function main() {
  // Read the user's input
  const [a, b, c] = input("Digite 3 valores (separados por vírgula): ").split(',').map(Number);

  let smallest = a;
  if (b < smallest) smallest = b;
  if (c < smallest) smallest = c;

  console.log(`\nMenor: ${smallest}`);
}

main();
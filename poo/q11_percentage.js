// Include the prompt-sync module
const input = require('prompt-sync')();

function main() {
  // Read the user's input
  const x = Number(input("Informe o valor: ")),
    p = Number(input("Valor da porcentagem: "));

  const result = calculatePercentage(p, x);

  console.log(`\nResultado: ${result}`);
}

main();

function calculatePercentage(p, x) {
  return (p / 100) * x;
}
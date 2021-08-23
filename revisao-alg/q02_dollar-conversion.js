// Include the prompt-sync module
const input = require('prompt-sync')();

function main() {
  // Read the user's input
  const dollarNow = Number(input("Informe o valor atual do dólar: "));
  const valueInUSD = Number(input("Informe o valor em dólar: "));

  const valueInBRL = dollarNow * valueInUSD;

  console.log(`\nValor em real: R$${valueInBRL.toFixed(2)}`);
}

main();
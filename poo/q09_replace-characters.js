// Include the prompt-sync module
const input = require('prompt-sync')();

function main() {
  // Read the user's input
  const s = input("Informe o valor da string: ").split(""),
    a = input("Caractere que será substituído: "),
    b = input("Novo caractere: ");

  const result = s.map(char => (char === a) ? b : char).join('');

  console.log(`\nResultado: ${result}`);
}

main();
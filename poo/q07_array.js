// Include the prompt-sync module
const input = require('prompt-sync')();

function main() {
  const array = [];
  let value;

  for (let i = 1; i <= 5; i++) {
    // Read the user's input
    value = input(`Digite o ${i}° valor: `);
    array.push(value);
  }

  console.table(array);
}

main();
// Include the prompt-sync module
const input = require('prompt-sync')();

function main() {
  // Read the user's input
  const valueInSeconds = Number(input("Valor em segundos: "));
  const result = convertTime(valueInSeconds);

  console.log(`\nResultado: ${result}`);
}

main();

function convertTime(value) {
  const hours = Math.trunc(value / 3600),
    minutes = Math.trunc((value % 3600) / 60),
    seconds = value % 60;

  return `${hours}:${minutes}:${seconds}`;
}
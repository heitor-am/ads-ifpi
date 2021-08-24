// Include the prompt-sync module
const input = require('prompt-sync')();

function main() {
  // Read the user's input
  const text = input("Digite o texto: ").split("");

  const result = text.map(char => {
    return (isVowel(char)) ? "" : char;
  }).join('');

  console.log(`\nResultado: ${result}`);
}

main();

function isVowel(char) {
  const vowels = ["a", "e", "i", "o", "u"];
  
  return vowels.includes(char.toLowerCase());
}
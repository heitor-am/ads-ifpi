// Include the prompt-sync module
const input = require('prompt-sync')();

function main() {
  // Read the user's input
  const monthNumber = Number(input("Informe o número do mês: "));

  const months = {
    1: "Janeiro",
    2: "Fevereiro",
    3: "Março",
    4: "Abril",
    5: "Maio",
    6: "Junho",
    7: "Julho",
    8: "Agosto",
    9: "Setembro",
    10: "Outubro",
    11: "Novembro",
    12: "Dezembro",
  };

  console.log(months[monthNumber]);
}

main();
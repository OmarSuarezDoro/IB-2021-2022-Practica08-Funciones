#include <iostream>
#include <vector>
#include <cmath>

void MensajeInicial() {
  std::cout << "Este programa muestra los divisores de uno o varios números introducidos por el usuario";
}

int CalculateDivisors(int number_introduced) {
  std::cout << "divisors of " << number_introduced << ":";
  for (int contador = 1; contador < sqrt(number_introduced); ++contador) {
    if(number_introduced % contador == 0) {
      std::cout << " " << contador;
    } 
  }
  for (int contador = sqrt(number_introduced); contador >= 1; --contador) {
    if(number_introduced % contador == 0) {
      std::cout << " " <<(number_introduced / contador);
    } 

  }
  return 0;
}

int main() {
  // MensajeInicial();
  int number_introduced;
  while(std::cin >> number_introduced) {
    CalculateDivisors(number_introduced);
    std::cout << "\n";
  }
  return 0;
}   
#include <iostream>
#include <vector>

void MensajeInicial() {
  std::cout << "Este programa muestra los divisores de uno o varios números introducidos por el usuario";
}

std::vector<int> CalculateDivisors(int number_introduced, std::vector<int> divisors) {
  for (int contador = 1; contador <= number_introduced; ++contador) {
    if(number_introduced % contador == 0) {
      divisors.push_back(contador);
    } 
  }
  return divisors;
}

int main() {
  // MensajeInicial();
  int number_introduced;
  while(std::cin >> number_introduced) {
    std::vector<int> divisors;
    divisors = CalculateDivisors(number_introduced, divisors);
    std::cout << "divisors of " << number_introduced << ":";
    for(int contador = 0; contador < divisors.size(); ++contador) {
      std::cout << " " << divisors.at(contador);
    }
    std::cout << "\n";
  }
  return 0;
}   
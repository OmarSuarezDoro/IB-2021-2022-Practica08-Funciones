/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file ej02-divisors-in-order.cc
  * @author Omar Suárez alu0101483474@ull.edu.es
  * @date Nov 22 2022
  * @brief The program prints the divisors of a number introduced by user in order.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39308_en
  */
#include <iostream>
#include <cmath>

void MensajeInicial() {
  std::cout << "Este programa muestra los divisores de uno o varios números introducidos por el usuario" << std::endl << std::endl;
}
// @brief Calculate the divisors of the introduced numbers.
int CalculateDivisors(int number_introduced) {
  std::cout << "divisors of " << number_introduced << ":";
  for (int contador = 1; contador < sqrt(number_introduced); ++contador) {
    if (number_introduced % contador == 0) {
      std::cout << " " << contador;
    } 
  }
  for (int contador = sqrt(number_introduced); contador >= 1; --contador) {
    if (number_introduced % contador == 0) {
      std::cout << " " << (number_introduced / contador);
    } 

  }
  return 0;
}

int main() {
  MensajeInicial();
  int number_introduced;
  while (std::cin >> number_introduced) {
    CalculateDivisors(number_introduced);
    std::cout << "\n";
  }
  return 0;
}   

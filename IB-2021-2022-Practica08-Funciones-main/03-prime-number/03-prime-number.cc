/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file ej03-prime-number.cc
  * @author Omar Suárez alu0101483474@ull.edu.es
  * @date Nov 22 2022
  * @brief The program determinate if a number introduced by user is prime or not.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48713_en
  */

#include <iostream>
#include <cmath>

void MensajeInicial() {
  std::cout << "This program determinate if a number introduced by user is prime or not." << std::endl << std::endl;
}
// @brief Determinate if the introduced number is prime or not.
bool DeterminateIfPrimeOrNot(int introduced_number) {
  if (introduced_number == 0 || introduced_number == 1) {
    return 0;
  }
  for (int contador = 2; contador <= sqrt(introduced_number); ++contador) {
    if (introduced_number == 2) {
      return true;
    }
    else if (introduced_number % contador == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int introduced_number, number_of_inputs;
  std::cin >> number_of_inputs;
  while (std::cin >> introduced_number) {
    bool resultado{1};
    resultado = DeterminateIfPrimeOrNot(introduced_number); 
    if (resultado == true) {
      std::cout << introduced_number << " is prime" << std::endl;  
    } else {
      std::cout << introduced_number << " is not prime" << std::endl;
    }
  }
  return 0;
}

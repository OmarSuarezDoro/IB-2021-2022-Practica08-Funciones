/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file ej06-Harmonic-numbers-2.cc
  * @author Omar Suárez alu0101483474@ull.edu.es
  * @date Nov 22 2022
  * @brief The program calculate the diference between two harmonic numbers.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58153_en
  */

#include <iostream>
#include <iomanip>

void MensajeInicial() {
  std::cout << "This program calculate the diference between two harmonic numbers." << std::endl << std::endl;
}

// @brief This function calculate the diference between 2 harmonic numbers without using -.
double CalculateHarmonicNumber(const int first_number_introduced, const int second_number_introduced) {
  double harmonic_number{0};
  for (double counter = (second_number_introduced + 1); counter <= first_number_introduced; ++counter) {
    harmonic_number = harmonic_number + (1.00 / counter);
  }
  return harmonic_number;
}

int main() {
  double first_number_introduced, second_number_introduced;
  double harmonic_first_number, harmonic_second_number;
  while (std::cin >> first_number_introduced >> second_number_introduced) {
    std::cout << std::fixed << std::setprecision(10) << CalculateHarmonicNumber(first_number_introduced, second_number_introduced) << std::endl;
  }
  return 0;
}

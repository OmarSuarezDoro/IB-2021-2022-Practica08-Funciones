/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file ej01-three-words.cc
  * @author Omar Suárez alu0101483474@ull.edu.es
  * @date Nov 22 2022
  * @brief The program prints three words that user introduce in the inverse order
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P62421_en/statement
  */

#include <iostream>
#include <string>
#include <vector>

void MensajeInicial() {
  std::cout << "Este programa devuelve al usuario tres palabras que ha introducido en orden inverso." << std::endl << std::endl;
}

int main() {
  MensajeInicial();
  std::string palabra_introducida, palabra_introducida_2, palabra_introducida_3;
  while (std::cin >> palabra_introducida >> palabra_introducida_2 >> palabra_introducida_3) {
    std::cout << palabra_introducida_3 << " " << palabra_introducida_2 << " " << palabra_introducida << std::endl;
  }
  return 0;
}


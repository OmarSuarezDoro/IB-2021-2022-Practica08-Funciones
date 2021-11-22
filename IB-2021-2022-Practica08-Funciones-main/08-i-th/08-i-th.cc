/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file ej08-I-th.cc
  * @author Omar Suárez alu0101483474@ull.edu.es
  * @date Nov 22 2022
  * @brief The program return that after, given an integer number i and a sequence of natural numbers x1, …, xn, prints xi.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39225_en
  */

#include <iostream>

void StartMessage() {
  std::cout << "This program return a number of a sequence introduced by user in a determinated position." << std::endl;
}
// @brief this function look for the number of the position digited in the sequence.
bool SearchNumberPosition(int& counter, int number_sequence_position, int& sequence_number) {
  counter = counter + 1;
  bool position_situation{0};
  if (counter == number_sequence_position) {
    position_situation = 1;
  } else {
    position_situation = 0;
  }
  return position_situation;
}

int main() {
  StartMessage();
  int number_sequence_position;
  std::cin >> number_sequence_position;
  int sequence_number, counter{0};
  while (std::cin >> sequence_number) {
    if (SearchNumberPosition(counter, number_sequence_position, sequence_number) == 1) {
      std::cout << "At the position " << number_sequence_position << " there is a(n) " << sequence_number << "." << std::endl;
      break;
    }
  }

  return 0;
}


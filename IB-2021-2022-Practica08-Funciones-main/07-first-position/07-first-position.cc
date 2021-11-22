/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file ej07-First-position.cc
  * @author Omar Suárez alu0101483474@ull.edu.es
  * @date Nov 22 2022
  * @brief The program return the firs position of an even number in a sequence digited by user.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P89078_en
  */

#include <iostream>

void StartMessage() {
  std::cout << "This program read a sequence of numbers digit by user, then return the value of the position of the first even number" << std::endl;
}
// @This function look for the first even number of the sequence.
int PrintFirstEven(int number, int& counter) {
  counter = counter + 1;
  if ((number % 2) == 0) {
    return counter;
  }
  return 0;
}

int main() {
  StartMessage();
  int number, even, counter{0};
  while (std::cin >> number) {
    even = PrintFirstEven(number, counter); 
    if (even != 0) {
    std::cout << counter << std::endl;
    break;
    }
  }
  return 0;
}
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file ej10-Parentheses.cc
  * @author Omar Suárez alu0101483474@ull.edu.es
  * @date Nov 22 2022
  * @brief The program return if a sequence of '(' and ')' tell if the parentheses close correctly.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P31111_en
  */

#include <iostream>
#include <string>
#include <vector>

void StartMessage() {
  std::cout << "This program determinate if the parentheses of a sequence composed by ( and ) are correctly closed." << std::endl;
}
// @brief This function count the number of parentheses in the squence, and deal with some problematic cases.
bool NumberOfParentheses(std::string introduced_sentence) {
  int close{0};
  for (int contador = 0; contador < introduced_sentence.length(); ++contador) {
    if (introduced_sentence.at(contador) == '(') {
      close = close + 1;
    }
    if (introduced_sentence.at(0) == ')' || introduced_sentence.at(introduced_sentence.length() - 1) == '(') {
      close = 1;
      return close;
    }
    if (introduced_sentence.at(contador) == ')') {
      close = close - 1;
      if (close <= -1) {
        return close;
      }
    }
  }
  return close;
}

int main() {
  std::string introduced_sentence;
  getline(std::cin, introduced_sentence);
  bool close{false};
  close = NumberOfParentheses(introduced_sentence);
  if (close == 0) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
  return 0;
}

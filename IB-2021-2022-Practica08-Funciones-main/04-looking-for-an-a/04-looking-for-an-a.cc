/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file ej04-looking-for-an-a.cc
  * @author Omar Suárez alu0101483474@ull.edu.es
  * @date Nov 22 2022
  * @brief The program search the character a in a sentence introduced by user.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P75149_en
  */

#include <iostream>
#include <string>

void MensajeInicial() {
  std::cout << "This program search the character a in a sentence introduced by user." << std::endl << std::endl;
}
//This function search in the string the character a.
bool SearchA(std::string introduced_sentence) {
  bool result{0};
  for (int counter = 0; counter < introduced_sentence.length(); ++counter) {
    if (introduced_sentence.at(counter) == 'a') {
      result = 1;
    }
  }
  return result;
}

int main() {
  MensajeInicial();
  std::string introduced_sentence;
  getline(std::cin, introduced_sentence);
  bool result{0};
  int sentence_length;
  sentence_length = introduced_sentence.length();
  result = SearchA(introduced_sentence);
  if (result == 1) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  } 
  return 0;
}

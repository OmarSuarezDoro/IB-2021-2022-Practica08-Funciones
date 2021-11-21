#include <iostream>
#include <string>
#include <vector>

bool NumberOfParentheses(std::string introduced_sentence) {
  bool close{false};
  int longitud_cadena = introduced_sentence.length(); 
  int opened_parentheses{0}, closed_parentheses{0};
 // This loop count the number of characters '(' and ')' 
  for (int contador = 0; contador < longitud_cadena; ++contador) {
    if (introduced_sentence.at(contador) == '(') {
      opened_parentheses = opened_parentheses + 1;
    } 

    else if(introduced_sentence.at(contador) == ')') {
      closed_parentheses = closed_parentheses + 1;
    }
  }
  // This loop search for ')' after a '('
  if(opened_parentheses == closed_parentheses) {
    close = true;
    for (int contador = 0; contador < longitud_cadena; ++contador) {
      if (introduced_sentence.at(contador) == '(') {
        if (contador == (longitud_cadena - 1)) {
          close = false;
          return close;
        }
        for (int contador2 = contador ; contador2 < longitud_cadena; ++contador2) {
          if (introduced_sentence.at(contador2) == ')') {
            close = true;
          }
        }
      }  
    }
  } 
  else {
    close = false;
  }
  return close;
}

int main() {
  std::string introduced_sentence;
  std::getline(std::cin, introduced_sentence);
  bool close{false};
  close = NumberOfParentheses(introduced_sentence);
  if (close == true) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
  return 0;
}
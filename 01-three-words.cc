#include <iostream>
#include <string>
#include <vector>

void MensajeInicial() {
  std::cout << "Este programa devuelve al usuario tres palabras que ha introducido en orden inverso.";
}

int main() {
 // MensajeInicial();
  std::string palabra_introducida, palabra_introducida_2, palabra_introducida_3;
  while (std::cin >> palabra_introducida >> palabra_introducida_2 >> palabra_introducida_3) {
    std::cout << palabra_introducida_3 << " " << palabra_introducida_2 << " " << palabra_introducida << std::endl;
  }
  return 0;
}


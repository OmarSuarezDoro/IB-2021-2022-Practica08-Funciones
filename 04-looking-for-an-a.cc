#include <iostream>
#include <string>

bool BuscarA(std::string frase_introducida) {
  bool resultado{0};
  for (int contador = 0; contador < frase_introducida.length(); ++contador) {
    if (frase_introducida.at(contador) == 'a') {
      resultado = 1;
    }
  }
  return resultado;
}

int main() {
  std::string frase_introducida;
  getline(std::cin, frase_introducida);
  bool resultado{0};
  int longitud_frase;
  longitud_frase = frase_introducida.length();
  resultado = BuscarA(frase_introducida);
  if (resultado == 1) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  } 
  return 0;
}
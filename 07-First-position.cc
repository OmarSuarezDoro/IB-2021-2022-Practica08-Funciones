#include <iostream>

int PrintFirstEven(int number, int& contador) {
  contador = contador + 1;
  if (number % 2 == 0) {
    return contador;
  }
  return 0;
}



int main() {
  int number, par, contador{0};
  while (std::cin >> number) {
    par = PrintFirstEven(number, contador); 
    if (par != 0) {
    std::cout << PrintFirstEven(number, contador);
    }
  }
  return 0;
}
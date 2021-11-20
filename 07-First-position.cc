#include <iostream>

int PrintFirstEven(int number, int& counter) {
  counter = counter + 1;
  if ((number % 2) == 0) {
    return counter;
  }
  return 0;
}

int main() {
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
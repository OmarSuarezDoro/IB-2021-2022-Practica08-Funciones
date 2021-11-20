#include <iostream>

void StartMessage() {
  std::cout << "This program read a sequence of numbers digit by user, then return the value of the position of the first even number" << std::endl;
}

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
#include <iostream>
#include <cmath>

bool DeterminateIfPrimeOrNot(int introduced_number) {
  if(introduced_number == 0 || introduced_number == 1) {
    return 0;
  }
  for(int contador = 2; contador <= sqrt(introduced_number); ++contador) {
    if(introduced_number == 2) {
      return true;
    }
    else if(introduced_number % contador == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  int introduced_number, number_of_inputs;
  std::cin >> number_of_inputs;
  while(std::cin >> introduced_number) {
    bool resultado{1};
    resultado = DeterminateIfPrimeOrNot(introduced_number); 
    if (resultado == true) {
      std::cout << introduced_number << " is prime" << std::endl;  
    } else {
      std::cout << introduced_number << " is not prime" << std::endl;
    }
  }
  return 0;
}
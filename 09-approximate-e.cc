#include <iostream>
#include <iomanip>

int CalculateFactorial(int counter) {
  int factorial{1};
  for (int counter2 = 1; counter2 <= counter; ++counter2) {
    factorial = factorial * counter2;
  }
  return factorial;
}

double CalculateEulerNumber(const int number_introduced){
  double euler_number{1};
  for (int counter = 1; counter < number_introduced; ++counter) {  
    euler_number = euler_number + (1.00 / (CalculateFactorial(counter)));
  } 
  return euler_number;
} 

int main() {
  int number_introduced;
  while (std::cin >> number_introduced) {
    if (number_introduced == 0) {
      std::cout << "With " << number_introduced << " term(s) we get " << std::fixed << std::setprecision(10) << 0.0000000000 << "." << std::endl;
    } else if(number_introduced == 1) {
      std::cout << "With " << number_introduced << " term(s) we get " << std::fixed << std::setprecision(10) << 1.0000000000 << "." << std::endl;
    } else  {
      std::cout << "With " << number_introduced << " term(s) we get " << std::fixed << std::setprecision(10) << CalculateEulerNumber(number_introduced) << "." << std::endl;    
    }
  }
  return 0;
}
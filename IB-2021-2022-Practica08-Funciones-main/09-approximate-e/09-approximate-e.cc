/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file ej09-Approximation-of-e.cc
  * @author Omar Suárez alu0101483474@ull.edu.es
  * @date Nov 22 2022
  * @brief The program that every given natural number n, prints the approximation of e that we get by adding the n first terms of the series above.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P11916_en
  */

#include <iostream>
#include <iomanip>

void StartMessage() {
  std::cout << "This program return an approximation of euler number, after a natural number has been introduced." << std::endl;
}
// @brief This function calculate the factorial number.
double CalculateFactorial(double counter) {
  double factorial{1.00};
  for (double counter2 = 1.00; counter2 <= counter; ++counter2) {
    factorial = factorial * counter2;
  }
  return factorial;
}
// @brief This function calculate the approximation of the number e.
double CalculateEulerNumber(double number_introduced) {
  double euler_number{1.00};
  for (double counter = 1.00; counter < number_introduced; ++counter) {  
    euler_number = euler_number + (1.00 / (CalculateFactorial(counter)));
  } 
  return euler_number;
} 

int main() {
  StartMessage();
  double number_introduced;
  while (std::cin >> number_introduced) {
    if (number_introduced == 0) {
      std::cout << "With " << std::setprecision(0) << number_introduced << " term(s) we get ";
      std::cout << std::fixed << std::setprecision(10) << 0.0000000000 << "." << std::endl;
    } else if (number_introduced == 1) {
      std::cout << "With " << std::setprecision(0) << number_introduced << " term(s) we get ";
      std::cout << std::fixed << std::setprecision(10) << 1.0000000000 << "." << std::endl;
    } else {
      std::cout << "With " << std::setprecision(0) << number_introduced << " term(s) we get ";
      std::cout << std::fixed << std::setprecision(10) << CalculateEulerNumber(number_introduced) << "." << std::endl;    
    }
  }
  return 0;
}

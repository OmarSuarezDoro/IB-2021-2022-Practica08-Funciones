#include <iostream>
#include <iomanip>

void FirstMessage() {
  std::cout << "This program print the harmonic number of an introduced number.";
}

double CalculateHarmonicNumber(int introduced_number) {
  double harmonic_number{0};
  double division_of_counter;
  for (double counter = 1; counter <= introduced_number; ++counter) {
    division_of_counter = (1/counter);
    harmonic_number = harmonic_number + division_of_counter;
  }
  return harmonic_number;
}

int main() {
  //FirstMessage();
  int introduced_number;
  std::cin >> introduced_number;
  std::cout << std::fixed << std::setprecision(4) << CalculateHarmonicNumber(introduced_number) << std::endl;
  return 0;
}
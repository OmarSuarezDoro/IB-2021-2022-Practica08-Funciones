#include <iostream>
#include <iomanip>



double CalculateHarmonicNumber(const int first_number_introduced, const int second_number_introduced) {
  double harmonic_number{0};
  for (double counter = (second_number_introduced + 1); counter <= first_number_introduced; ++counter) {
    harmonic_number = harmonic_number + (1.00 / counter);
  }
  return harmonic_number;
}


int main() {
  double first_number_introduced, second_number_introduced;
  double harmonic_first_number, harmonic_second_number;
  while (std::cin >> first_number_introduced >> second_number_introduced) {
    std::cout << std::fixed << std::setprecision(10) << CalculateHarmonicNumber(first_number_introduced, second_number_introduced)<< std::endl;
  }
  return 0;
}
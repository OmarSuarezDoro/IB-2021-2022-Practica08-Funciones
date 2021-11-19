#include <iostream>
#include <iomanip>

double PrintTheDiference(double harmonic_first_number, double harmonic_second_number) {
  double resultado;
  resultado = harmonic_first_number - harmonic_second_number;
  return resultado;
}

double CalculateHarmonicNumber(int introduced_number) {
  double harmonic_number{0};
  for (double counter = 1; counter <= introduced_number; ++counter) {
    harmonic_number = harmonic_number + (1 / counter);
  }
  return harmonic_number;
}

double CalculateHarmonicNumber2(int introduced_number, int harmonic_second_number) {
  double harmonic_number{0};
  if (harmonic_second_number == 0) {
    for (double counter = (harmonic_second_number + 1); counter <= introduced_number; ++counter) {
      harmonic_number = harmonic_number + (1 / counter);
    }
  } else {
    for (double counter = harmonic_second_number; counter <= introduced_number; ++counter) {
      harmonic_number = harmonic_number + (1 / counter);
    }
  }
  return harmonic_number;
}

int main() {
  double first_number_introduced, second_number_introduced;
  double harmonic_first_number, harmonic_second_number;
  while (std::cin >> first_number_introduced >> second_number_introduced) {
  harmonic_second_number = CalculateHarmonicNumber(second_number_introduced);
  harmonic_first_number = CalculateHarmonicNumber2(first_number_introduced, harmonic_second_number);
  if (first_number_introduced >= second_number_introduced) {
      std::cout << std::fixed << std::setprecision(10) << PrintTheDiference(harmonic_first_number, harmonic_second_number) << std::endl;
    } 
  }
  return 0;
}
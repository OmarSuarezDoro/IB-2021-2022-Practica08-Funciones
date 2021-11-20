#include <iostream>

bool SearchNumberPosition(int& counter, int number_sequence_position, int& sequence_number) {
  counter = counter + 1;
  bool position_situation{0};
  if (counter == number_sequence_position) {
    position_situation = 1;
  } else {
    position_situation = 0;
  }
  return position_situation;
}

int main() {
  int number_sequence_position;
  std::cin >> number_sequence_position;
  int sequence_number, counter{0};
  while (std::cin >> sequence_number) {
    if (SearchNumberPosition(counter, number_sequence_position, sequence_number) == 1) {
      std::cout << "At the position " << number_sequence_position << " there is a(n) " << sequence_number << "." << std::endl;
      break;
    }
  }

  return 0;
}


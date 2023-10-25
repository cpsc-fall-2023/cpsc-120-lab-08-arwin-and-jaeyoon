// Arwin Chaudhary
// arwinc@csu.fullerton.edu
// @arwinCh
// Partners: @jcho0106

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  int num_arguments{static_cast<int>(arguments.size()) - 1};
  if (num_arguments < 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  double sum{0.0};
  bool word{true};
  for (std::string& argument : arguments) {
    if (word) {
      word = false;
    } else {
      sum += std::stod(argument);
    }
  }

  double average = sum / (num_arguments);
  std::cout << "average = " << average << "\n";
  return 0;
}

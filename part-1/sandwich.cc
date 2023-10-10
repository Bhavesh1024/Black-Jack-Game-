// Bhavesh Malhi
// Bhavesh05@csu.fullerton.edu
// @bhavesh1024
// Partners: @julie0211

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments";
    return 1;
  }

  std::string PROTEIN{arguments.at(1)};
  std::string BREAD{arguments.at(2)};
  std::string CONDIMENT{arguments.at(3)};

  std::cout << "Your order:\n A" << PROTEIN << " sandwich on " << BREAD
            << " with " << CONDIMENT;

  return 0;
}

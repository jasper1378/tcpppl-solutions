#include <cstdlib>
#include <fstream>
#include <iostream>
#include <regex>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return EXIT_FAILURE;
  }
  std::ifstream file{argv[1]};
  std::regex regex{R"([+-]?(\d\.)*\d+)"};
  for (std::string line{}; std::getline(file, line);) {
    for (auto i{std::sregex_iterator{line.begin(), line.end(), regex}};
         i != std::sregex_iterator{}; ++i) {
      std::cout << i->str() << '\n';
    }
  }
}


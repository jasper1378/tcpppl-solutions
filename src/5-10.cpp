#include <fstream>
#include <iostream>

int main() {
  int i;
  std::ifstream f{"5-9_temp"};
  while (f >> i) {
    std::cout << i << '\n';
  }
}

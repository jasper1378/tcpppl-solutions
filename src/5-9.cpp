#include <fstream>

int main() {
  std::ofstream f{"5-9_temp"};
  for (std::size_t i{0}; i < 100; ++i) {
    f << i << '\n';
  }
}

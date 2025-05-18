#include <iostream>

int main() {
  std::initializer_list<int> l{4, 5, 9, 17, 12};
  for (auto i : l) {
    std::cout << i << '\n';
  }
}

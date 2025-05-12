
#include <algorithm>
#include <iostream>
#include <vector>

void print(const std::vector<std::string> &v) {
  std::cout << '[';
  for (std::size_t i = 0; i < v.size(); ++i) {
    if (i != 0) {
      std::cout << ',';
    }
    std::cout << v[i];
  }
  std::cout << "]\n";
}

int main() {
  std::vector<std::string> v{"Kant", "Plato", "Aristotle", "Kierkegard",
                             "Hume"};
  print(v);
  std::sort(v.begin(), v.end());
  print(v);
}

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
  std::cout << "Input a count: ";
  unsigned count;
  std::cin >> count;
  std::cout << "Input " << count << " characters: ";
  std::vector<char> arr(count);
  for (auto &e : arr) {
    std::cin >> e;
  }
  char c1;
  char c2;
  std::cout << "Input two character: ";
  std::cin >> c1;
  std::cin >> c2;
  auto p1{std::find(arr.begin(), arr.end(), c1)};
  auto p2{std::find(arr.begin(), arr.end(), c2)};
  if (p1 == arr.end()) {
    std::cout << "'" << c1 << "' not found\n";
    return 0;
  } else if (p2 == arr.end()) {
    std::cout << "'" << c2 << "' not found\n";
  } else {
    std::cout << "Characters between: " << std::abs(p2 - p1) << '\n';
  }
}

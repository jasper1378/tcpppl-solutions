#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
  std::cout << "Input a count: ";
  unsigned count;
  std::cin >> count;
  std::cout << "Input " << count << " integers: ";
  std::vector<int> arr(count);
  for (auto &e : arr) {
    std::cin >> e;
  }
  int i1;
  int i2;
  std::cout << "Input two integers: ";
  std::cin >> i1;
  std::cin >> i2;
  auto p1{std::find(arr.begin(), arr.end(), i1)};
  auto p2{std::find(arr.begin(), arr.end(), i2)};
  if (p1 == arr.end()) {
    std::cout << "'" << i1 << "' not found\n";
    return 0;
  } else if (p2 == arr.end()) {
    std::cout << "'" << i2 << "' not found\n";
  } else {
    std::cout << "Integers between: " << std::abs(p2 - p1) << '\n';
  }
}

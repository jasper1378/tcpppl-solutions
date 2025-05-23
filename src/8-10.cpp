#include <array>
#include <iostream>
#include <string>

constexpr std::size_t num_months{12};

void print(const std::array<std::string, num_months> &months) {
  for (const auto &m : months) {
    std::cout << m << '\n';
  }
}

int main() {
  std::array<std::string, num_months> months{
      "January", "February", "March",     "April",   "May",      "June",
      "July",    "August",   "September", "October", "November", "December"};

  for (const auto &m : months) {
    std::cout << m << '\n';
  }

  print(months);
}

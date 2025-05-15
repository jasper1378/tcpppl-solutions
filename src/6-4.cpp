#include <array>
#include <chrono>
#include <iostream>
#include <map>
#include <random>

int main() {
  constexpr int n{1'000'000};
  constexpr int min{-5};
  constexpr int max{5};

  std::random_device rand{};
  std::seed_seq seed{
      static_cast<std::seed_seq::result_type>(
          std::chrono::steady_clock::now().time_since_epoch().count()),
      rand(),
      rand(),
      rand(),
      rand(),
      rand(),
      rand(),
      rand(),
      rand()};
  std::mt19937 mt{seed};
  std::normal_distribution dist{};
  std::array<int, max - min + 1> hist{};

  for (int i{0}; i < n; ++i) {
    int x{static_cast<int>(std::round(dist(mt)))};
    if (min <= x && x <= max) {
      ++hist[x - min];
    }
  }
  for (int i{0}; i < max - min + 1; ++i) {
    std::cout << std::setw(2) << i + min << " : "
              << std::string(hist[i] * (100.0 / n), '*') << '\n';
  }
}

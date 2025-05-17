#include <iostream>
#include <type_traits>

int main() {
  if constexpr (std::is_signed_v<char>) {
    std::cout << "char is signed\n";
  } else {
    std::cout << "char is unsigned\n";
  }
}

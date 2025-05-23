#include <cstring>
#include <iostream>

int main() {
  char str[] = "a short string";
  std::cout << "sizeof(str) = " << sizeof(str) << '\n';
  std::cout << "strlen(str) = " << std::strlen(str) << '\n';
}

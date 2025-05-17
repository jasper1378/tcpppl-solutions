#include <iostream>
#include <limits>

#define PRINT(type)                                                            \
  do {                                                                         \
    std::cout << #type << ": " << sizeof(type) << '\n';                        \
  } while (0);

int main() {
  PRINT(bool);
  PRINT(char);
  PRINT(short);
  PRINT(int);
  PRINT(long);
  PRINT(long long);
  PRINT(float);
  PRINT(double);
  PRINT(long double);
  PRINT(unsigned);
  PRINT(unsigned long);
}

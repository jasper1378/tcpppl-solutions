#include <iostream>

#define PRINT(type)                                                            \
  do {                                                                         \
    std::cout << "sizeof(" << #type << ") = " << sizeof(type) << '\n';         \
  } while (0);

enum E {
  a,
  b,
  c,
};

int main() {
  PRINT(char);
  PRINT(short);
  PRINT(int);
  PRINT(long);
  PRINT(long long);
  PRINT(void *);
  std::cout << "sizeof(" << "enum" << ") = " << sizeof(E) << '\n';
}

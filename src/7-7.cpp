#include <cstdio>
#include <iostream>

int main() {
  for (char c = 'a'; c <= 'z'; ++c) {
    printf("'%c' = %d = 0x%x\n", c, c, c);
  }
  for (char c = '0'; c <= '9'; ++c) {
    printf("'%c' = %d = 0x%x\n", c, c, c);
  }
}

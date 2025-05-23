#include <iostream>

void swap_p(int *x, int *y) {
  int t{*x};
  *x = *y;
  *y = t;
}

void swap_r(int &x, int &y) {
  int t{x};
  x = y;
  y = t;
}

void swap_x(int &x, int &y) { x ^= y, y ^= x, x ^= y; }

int main() {
  std::cout << "Enter two integers: ";
  int x;
  int y;
  std::cin >> x;
  std::cin >> y;
  std::cout << "x = " << x << ", y = " << y << '\n';
  std::cout << "swap_p(&x,&y)\n";
  swap_p(&x, &y);
  std::cout << "x = " << x << ", y = " << y << '\n';
  std::cout << "swap_r(x,y)\n";
  swap_r(x, y);
  std::cout << "x = " << x << ", y = " << y << '\n';
  std::cout << "swap_x(x,y)\n";
  swap_x(x, y);
  std::cout << "x = " << x << ", y = " << y << '\n';
}

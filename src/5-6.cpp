#include <iostream>
#include <utility>
#include <vector>

struct pair {
  std::string name;
  int age;
};

std::ostream &operator<<(std::ostream &o, const pair &p) {
  return o << "name = \"" << p.name << "\", age = \"" << p.age << "\"\n";
}

std::istream &operator>>(std::istream &i, pair &p) {
  i >> p.name >> p.age;
  return i;
}

int main() {
  std::vector<pair> v;
  pair p;
  while (std::cin >> p) {
    v.push_back(std::move(p));
  }
  for (const auto &p : v) {
    std::cout << p;
  }
}

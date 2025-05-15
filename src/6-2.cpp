#include <chrono>
#include <iostream>
#include <string_view>
#include <thread>

void printer(const std::string_view str) {
  while (true) {
    std::cout << str << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds{1});
  }
}

int main() {
  using namespace std::literals;
  std::jthread t1{printer, "hello"sv};
  std::jthread t2{printer, "world"sv};
}

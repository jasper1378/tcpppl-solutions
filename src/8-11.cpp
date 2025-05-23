#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define SORT

int main() {
  std::vector<std::string> words;
  for (std::string w; std::cin >> w;) {
    if (w == "Quit") {
      break;
    }
    if (std::find(words.begin(), words.end(), w) == words.end()) {
      words.push_back(std::move(w));
    }
  }
#ifdef SORT
  std::sort(words.begin(), words.end());
#endif
  for (bool first{true}; const auto &w : words) {
    if (first) {
      first = false;
    } else {
      std::cout << ' ';
    }
    std::cout << w;
  }
}

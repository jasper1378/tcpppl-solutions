#include <cassert>
#include <string>
#include <string_view>

int count_occurences(const std::string_view str,
                     const std::string_view substr) {
  int occur{0};
  std::string_view::size_type prev{0};
  while ((prev = str.find(substr, prev)) != std::string_view::npos) {
    ++prev;
    ++occur;
  }
  return occur;
}

int main() {
  const char *cstr{"xabaacbaxabb"};
  std::string sstr{"xabaacbaxabb"};
  assert(count_occurences(cstr, "ab") == 2);
  assert(count_occurences(sstr, "ab") == 2);
}

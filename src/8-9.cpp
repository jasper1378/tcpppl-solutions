#include <functional>
#include <iostream>
#include <string_view>
#include <type_traits>

template <typename Func, typename Arg>
void check(const std::string_view func_str, const std::string_view arg_str,
           Func &&func, Arg &&arg) {
  std::cout << func_str << '(' << arg_str << ')' << '\t';
  if constexpr (std::is_invocable_v<Func, Arg>) {
    std::cout << "is legal and ";
    const std::remove_cvref_t<Arg> &t{std::forward<Arg>(arg)};
    if (std::addressof(t) ==
        std::invoke(std::forward<Func>(func), std::forward<Arg>(arg))) {
      std::cout << "doesn't create a temp";
    } else {
      std::cout << "does create a temp";
    }
  } else {
    std::cout << "is illegal";
  }
  std::cout << '\n';
}

#define DO_CHECK(func, arg) check(#func, #arg, func, arg)

const void *f(char c) { return &c; }

const void *g(char &c) { return &c; }

const void *h(const char &c) { return &c; }

int main() {
  char c{};
  unsigned char uc{};
  signed char sc{};

  std::cout << "f(char c)\n";
  std::cout << "g(char& c)\n";
  std::cout << "h(const char& c)\n";
  std::cout << '\n';

  DO_CHECK(f, 'a');
  DO_CHECK(f, 49);
  DO_CHECK(f, 3300);
  DO_CHECK(f, c);
  DO_CHECK(f, uc);
  DO_CHECK(f, sc);

  DO_CHECK(g, 'a');
  DO_CHECK(g, 49);
  DO_CHECK(g, 3300);
  DO_CHECK(g, c);
  DO_CHECK(g, uc);
  DO_CHECK(g, sc);

  DO_CHECK(h, 'a');
  DO_CHECK(h, 49);
  DO_CHECK(h, 3300);
  DO_CHECK(h, c);
  DO_CHECK(h, uc);
  DO_CHECK(h, sc);
}

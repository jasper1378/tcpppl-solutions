int main(int argc, char *argv[]) {
  int s{0};

#ifdef PTR
  for (char *p{argv[0]}; *p != '\0'; ++p) {
    s += *p;
  }
#else
  for (int i{0}; argv[0][i] != '\0'; ++i) {
    s += argv[0][i];
  }
#endif

  return s;
}

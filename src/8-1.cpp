int main() {
  char foo;
  char *bar[10];
  int baz;

  char *a = &foo;
  int b[10] = {0, 1, 2, 3, 4, 5, 6, 7, 9};
  int(&c)[10] = b;
  char *(*d)[]{&bar};
  char **e = &a;
  const int f{1};
  const int *g{&f};
  int *const h{&baz};

  (void)a;
  (void)b;
  (void)c;
  (void)d;
  (void)e;
  (void)f;
  (void)g;
  (void)h;
}

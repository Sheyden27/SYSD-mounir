int main(void) {
  int n = 42;
  char* msg = "Hello";
  int *p1, *p2;
  char* p3;

  p1 = n;
  p2 = &n;

  (*p2)++;

  p3 = msg;
  return 0;
}

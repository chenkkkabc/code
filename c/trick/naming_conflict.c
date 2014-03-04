// Solve the naming conflict between macro and function

#include <stdio.h>

void f() { printf("function\n"); }
#define f() printf("macro\n")

int main() {
  f(); // macro
  (f)(); // function

  return 0;
}

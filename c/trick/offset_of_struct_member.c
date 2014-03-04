#define OFFSET(TYPE, MEM) ((size_t)&(((TYPE*)0)->MEM))

// test stub
struct s1 {
  int i;
};

struct s2 {
  int i;
  struct s1 s;
  double d;
};

#include <stdio.h>
int main() {
  printf("Offset of d in struct s2 is %d\n", OFFSET(struct s2, d));
  return 0;
}

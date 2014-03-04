int is_power_of_2(unsigned int n) {
  if (n == 0) {
    return 0;
  }
  return (n & n - 1) == 0;
}

// test stub
#include <stdio.h>
int main() {
  int i = 65536;
  if (is_power_of_2(i)) {
    printf("%d is power of 2\n", i);
  }
}

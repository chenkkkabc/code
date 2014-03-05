int is_leap_year(unsigned int n) {
    return n % 4 == 0 && n % 100 != 0 || n % 400 == 0;
}

// stub test
#include <stdio.h>
int main() {
  unsigned int a[] = {1889, 1900, 1998, 2000, 2012};
  int i, n = sizeof(a) / sizeof(a[0]);
  for (i = 0; i < n; i++) {
    if (is_leap_year(a[i])) {
      printf("%d is leap year\n", a[i]);
    }
    else {
      printf("%d is not leap year\n", a[i]);
    }
  }
}

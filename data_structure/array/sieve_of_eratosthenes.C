// 厄拉多塞筛法求素数
#include <stdlib.h>
#include <stdio.h>
void sieve_of_eratosthenes(int n) {
  int i, j;
  int* a = (int*)malloc((n + 1) * sizeof(int));
  for (i = 2; i < n; i++) {
    a[i] = 1;
  }
  for (i = 2; i < n; i++) {
    if (a[i]) {
      for (j = i; i * j < n; j++) {
        a[i * j] = 0;
      }
    }
  }
  for (i = 2; i < n; i++) {
    if (a[i]) {
      printf("%4d ", i);
    }
  }
  printf("\n");
  free(a);
}

// test stub
int main() {
  sieve_of_eratosthenes(10000);
  return 0;
}

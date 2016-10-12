#include "basic.h"

void bubble_sort(Array array, int n) {
  int i, j;
  for (i = 0; i <= n - 2; ++i) {
    for (j = n - 1; j >= i + 1; --j) {
      if (cmp(array[j], array[j - 1]) < 0) {
        swap(array, j, j - 1);
      }
    }
  }
}

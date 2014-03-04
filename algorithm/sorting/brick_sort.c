#include "basic.h"

void brick_sort(Array array, int n) {
  int i, j;
  for (i = n - 1; i >= 1; --i) {
    for (j = 0; j <= i - 1; ++j) {
      if (cmp(array[j], array[j + 1]) > 0) {
        swap(array, j, j + 1);
      }
    }
  }
}

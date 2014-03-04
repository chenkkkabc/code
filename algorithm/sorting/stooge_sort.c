#include "basic.h"

void s_sort(Array array, int i, int j);

void stooge_sort(Array array, int n) {
  s_sort(array, 0, n - 1);
}

void s_sort(Array array, int i, int j) {
  if (cmp(array[i], array[j]) > 0) {
    swap(array, i, j);
  }
  if (i + 1 >= j) {
    return;
  }
  int k = (j - i + 1) / 3;
  s_sort(array, i, j - k);
  s_sort(array, i + k, j);
  s_sort(array, i, j - k);
}

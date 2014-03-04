#include "basic.h"

void selection_sort(Array array, int n) {
  int i, j, min;
  for (i = 0; i <= n - 2; i++) {
    min = i;
    for (j = i + 1; j <= n - 1; j++) {
      if (cmp(array[j], array[min]) < 0) {
        min = j;
      }
    }
    if (cmp(array[min], array[i]) < 0) {
      swap(array, i, min);
    }
  }
}

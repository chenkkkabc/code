#include "basic.h"

void comb_sort(Array array, int n) {
  double shrink = 1.247330950103979; // 1 / (1 - 1 / e ^ φ)
  int i, gap = n;
  int swapped = 1;

  while (gap > 1 || swapped) {
    if (gap > 1) {
      gap = gap / shrink; // ⌊gap / shrink⌋
    }
    i = 0;
    swapped = 0;
    while (i+gap < n) {
      if (cmp(array[i + gap], array[i]) < 0) {
        swap(array, i, i + gap);
        swapped = 1;
      }
      i++;
    }
  }
}

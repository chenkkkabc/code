#include "basic.h"

void q_sort(Array array, int l, int r);
int partition(Array array, int l, int r);

void quick_sort(Array array, int n) {
  q_sort(array, 0, n - 1);
}

void q_sort(Array array, int l, int r) {
  if (r <= l) {
    return;
  }
  int i = partition(array, l, r);
  q_sort(array, l, i - 1);
  q_sort(array, i + 1, r);
}

int partition(Array array, int l, int r) {
  int i = l - 1;
  int j = r;
  int v = array[r]; // select pivot

  while (1) {
    while (cmp(v, array[++i]) > 0);
    while (cmp(v, array[--j]) < 0) {
      if (j == l) {
        break;
      }
    }
    if (i >= j) {
      break;
    }
    swap(array, i, j);
  }
  swap(array, i, r);
  return i;
}

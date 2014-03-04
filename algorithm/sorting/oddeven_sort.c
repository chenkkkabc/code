#include "basic.h"

void oddeven_sort(Array array, int n) {
  int sorted = 0;
  int i;

  while (!sorted) {
    sorted = 1;
    i = 1;
    while (i < n - 1) {
      if (cmp(array[i + 1], array[i]) < 0) {
        swap(array, i, i + 1);
        sorted = 0;
      }
      i = i + 2;
    }
    i = 0;
    while (i < n - 1) {
      if (cmp(array[i + 1], array[i]) < 0) {
        swap(array, i, i + 1);
        sorted = 0;
      }
      i = i + 2;
    }
  }
}

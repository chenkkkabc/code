#include "basic.h"

void insertion_sort(Array array, int n) {
  int i;
  for (i = 1; i <= n - 1; ++i) {
    // Insert A[i] into the sorted sequence A[0..i-1]
    insert(array, i, array[i], 1);
  }
}

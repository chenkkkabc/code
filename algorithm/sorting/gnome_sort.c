#include "basic.h"

void gnome_sort(Array array, int n) {
  int i = 0;
  while (i < n) {
    if (i == 0 || cmp(array[i - 1], array[i]) <= 0) {
      i++;
    }
    else {
      swap(array, i, i - 1);
      i--;
    }
  }
}

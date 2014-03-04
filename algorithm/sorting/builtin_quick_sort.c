#include "basic.h"
#include <stdlib.h>

int compar(const void* p1, const void* p2) {
  return cmp(*(Item*)p1, *(Item*)p2);
}

void builtin_quick_sort(Array array, int n) {
  qsort(array, n, sizeof(Item), compar);
}

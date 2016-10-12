#include "basic.h"

void shell_sort(Array array, int n) {
  int gaps[16] = { 1, 3, 7, 21, 48, 112,
                   336, 861, 1968, 4592, 13776,
                   33936, 86961, 198768, 463792, 1391376 };
  int i, j, k = 0;
  while (gaps[k] < n) {
    k++;
  }
  for (i = k; i >= 0; --i) {
    for (j = gaps[i]; j <= n-1; ++j) {
      insert(array, j, array[j], gaps[i]);
    }
  }
}


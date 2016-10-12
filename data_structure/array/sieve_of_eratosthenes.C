// 厄拉多塞筛法求素数

#include <iostream>
using namespace std;

void sieve_of_eratosthenes(int n) {
  bool* a = new bool[n];
  a[0] = a[1] = false;
  for (int i = 2; i < n; i++) a[i] = true;
  for (int i = 2; i * i < n; i++)
    if (a[i])
      for (int j = i * i; j < n; j += i) a[j] = false;
  for (int i = 0; i < n; i++)
    if (a[i]) printf("%4d ", i);
  printf("\n");
  delete[] a;
}

// test stub
int main() {
  sieve_of_eratosthenes(10000);
  return 0;
}

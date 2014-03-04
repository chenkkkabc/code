#include "Stack.h"
#include <string.h>
#include <stdlib.h>

char* infix2postfix(char* expression) {
  char* a = expression;
  int i, j, n = strlen(a);
  init(n);
  for (i = 0, j = 0; i < n; ++i) {
    if (a[i] == ')') {
      a[j++] = pop();
    }
    if (a[i] == '+' || a[i] == '*') {
      push(a[i]);
    }
    if (a[i] >= '0' && a[i] <= '9') {
      a[j++] = a[i];
    }
  }
}

#include <stdio.h>
// test stub
int main() {
  char s[] = "35+7*9+2";
  char* str = s;
  printf("Infix:%s, ", str);
  printf("Postfix:%s\n", infix2postfix(str));
  return 0;
}

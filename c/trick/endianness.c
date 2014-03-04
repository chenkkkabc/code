// Endianness: Byte Order / Bit Order
// big endian: MSB(Most Significant Byte) first
// +----+----+----+----+
// | 00 | 00 | 00 | 01 |
// +----+----+----+----+
// -------- Address Grow -------->
//
// little endian: LSB(Least Significant Byte) first
// +----+----+----+----+
// | 01 | 00 | 00 | 00 |
// +----+----+----+----+
// -------- Address Grow -------->

// byte-level
int is_little_endian_1() {
  int a = 1;
  char* p = (char*)&a;
  return *p == 1;
}

int is_little_endian_2() {
  union {
    int a;
    char b;
  } u;
  u.a = 1;
  return u.b == 1;
}

// bit-level
int is_little_endian_3() {
  union {
    unsigned char a;
    struct {
      unsigned char b0 : 1;
      unsigned char : 7;
    } b;
  } u;
  u.a = 1;
  return u.b.b0 == 1;
}

// test stub
#include <stdio.h>
int main() {
  typedef int (*F)();
  F funcs[] = {
    &is_little_endian_1,
    &is_little_endian_2,
    &is_little_endian_3,
  };
  int i;
  F is_little_endian;
  for (i = 0; i < sizeof(funcs) / sizeof(F); ++i) {
    is_little_endian = funcs[i];
    if (is_little_endian()) {
      printf("Little endian\n");
    }
    else {
      printf("Big endian\n");
    }
  }
}


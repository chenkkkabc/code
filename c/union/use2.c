// Ignore bit masking / bit shifting

typedef union {
  struct {
    unsigned char b1 : 1;
    unsigned char b2 : 1;
    unsigned char b3 : 1;
    unsigned char b4 : 1;
    unsigned char reserved : 4;
  } bits;
  unsigned char byte;
} HWRegister;

int main() {
  HWRegister reg;
  reg.byte = 0;
  reg.bits.b2 = 1;

  return 0;
}

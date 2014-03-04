// Ignore bit masking / bit shifting
//
typedef union {
  struct {
    unsigned char byte1;
    unsigned char byte2;
    unsigned char byte3;
    unsigned char byte4;
  } bytes;
  unsigned int dword;
} HWRegister;

int main() {
  HWRegister reg;
  reg.dword = 0x12345678;
  reg.bytes.byte3 = 4;

  return 0;
}

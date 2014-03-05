// greatest common divisor
unsigned int gcd(unsigned int a, unsigned int b)
{
  unsigned int rem;
  while (b != 0) {
    rem = a % b;
    a = b;
    b = rem;
  }
  return a;
}

// least common multiple
unsigned int lcm(unsigned int a, unsigned int b)
{
  return a / gcd(a, b) * b;
}

//test stub
int main() {

  return 0;
}

typedef enum { TYPE1, TYPE2, TYPE3 } Type;

typedef int Derived1;
typedef char* Derived2;
typedef struct {
  int i;
  double d;
} Derived3;

typedef struct {
  Type type;
  union {
    Derived1 d1;
    Derived2 d2;
    Derived3 d3;
  };
} Base;

void do_something(Base* p) {
  switch(p->type) {
  case TYPE1: // do something with p->d1
    break;
  case TYPE2: // do something with p->d2
    break;
  case TYPE3: // do something with p->d3
    break;
  }
}

int main() {


  return 0;
}

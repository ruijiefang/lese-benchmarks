extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "ccbse-refute1.c", 3, "reach_error"); }
extern unsigned int __VERIFIER_nondet_uint(void);

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}



int main() {
 int m, n, i;
 m = __VERIFIER_nondet_int();
 n = __VERIFIER_nondet_int();

 for (i=0;i<3000;i++) {
  if (m == i) {
    int i, a, sum=0;
    while(n>0) {sum += 1;n--;}
    while(1) {
      if (sum==0 && m==77)
        __VERIFIER_assert(0);
    }
  }
 }
 return 0;
}


extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "diamond_1-1.c", 3, "reach_error"); }
extern unsigned int __VERIFIER_nondet_uint(void);

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}


int main() {
  int N = __VERIFIER_nondet_int();
   int i = 0, max = 0;
  // int gas = __VERIFIER_nondet_int();
  while(i<N){
	  //gas = gas - 1;
    if (__VERIFIER_nondet_int()%2)
	  i+= 1;
    else
	  max+=__VERIFIER_nondet_int() % 2;}
  if (max<5000) {
    return 0;
  } else __VERIFIER_assert(0);
 
  return 0;
}


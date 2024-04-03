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



int f(int m, int n) {
  //int i, a, sum=0;
  //for (i=0;i<6;i++) {
  //  sum += 1;
  //  n=n-1;
  //}
  while (1) {
    if (n==0/*(sum==0*/ && m==37)
      return 0;
    }
  return 1; 
 }

int g(int m, int n) {
  int i = 0;
  for(i = 0; i < 1000;i++) 
	  if (i==m) return f(m,n);
  return 1;
}

int main() {
  int m = __VERIFIER_nondet_int();
  int n = __VERIFIER_nondet_int();
  int r;
  if (m>=30) r = g(m,n);
  else r = 1;

  __VERIFIER_assert(r!=0);

}

//
// Originally from: Gulavani, B.S., Chakraborty, S., Nori, A.V., Rajamani, S.K.: Automatically refining abstract interpretations
// Figure 1(a) of https://link.springer.com/chapter/10.1007/978-3-642-00768-2_24
// Safe benchmark
//

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


int main(){
  int x=0, y=0, z=0, w=0;
  while(__VERIFIER_nondet_int()){
    if(__VERIFIER_nondet_int()){
      x++; y+=100;
    } else if(__VERIFIER_nondet_int()){
      if (x>=4){ x++; y++; }
      }else if(y>10*w && z>=100*x){
      y=-y;
    }
    w++; z+=10;
  }
  if( x>=4 && y <=2) __VERIFIER_assert(0);
  return 0;
}

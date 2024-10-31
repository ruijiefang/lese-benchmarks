//https://dl.acm.org/doi/pdf/10.1145/3660817
int main() { int a=__VERIFIER_nondet_int();int b=__VERIFIER_nondet_int();  __VERIFIER_assume(a<=255);__VERIFIER_assume(b<=255);
    if (a + b >= 10) {
        if (2 * b - a >= 5) {
            if (2 * a - b >= 15) {
               assert(0);

            }
        }
    }


    return 0;
}

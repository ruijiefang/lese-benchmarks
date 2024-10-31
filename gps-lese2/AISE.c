// https://link.springer.com/chapter/10.1007/978-3-031-57256-2_19
int main() {
    int x=__VERIFIER_nondet_int();
    int y=__VERIFIER_nondet_int();
    if (!(y <= 1000000))
        return 0;
    if (y>0) {
        while(x<100) {
            x=x+y;
        }
    }
    assert(y<=0||(y>0 && x>=100));
    return 0;
}

// https://dl.acm.org/doi/10.1145/2001420.2001424

int main(int x) {  // x is an input
    int c = 0, p = 0;
    while (1) {
        if (x <= 0) break;
        if (c == 50) assert(false);  /* error1 */
        c = c + 1;
        p = p + c;
        x = x - 1;
    }
    if (c == 30) assert(false);  /* error2 */
}

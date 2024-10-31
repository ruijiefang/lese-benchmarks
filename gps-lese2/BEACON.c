// https://ieeexplore.ieee.org/document/9833751

int main() {
    int w, x, y, z = input();
    // oracle
    __VERIFIER_assert((w < 5 || w > 25) && x < 40 && y < 100 && z < 200);
    // ...
    int u = z / x;
    assert(u < 59); // oracle
    int v = u + 1;
    if (x < 20)
        w = w - 15;
    else
        w = -w + 15;
    // ...
    if (z < 2 * y)
        if (v < 60)
            if (x < 40)
                if (v == y - x)
                    if (w > 10)
                        __VERIFIER_assert(w);
    }
    __VERIFIER_assert(false); // oracle
    ...
}

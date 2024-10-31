// https://dl.acm.org/doi/10.1145/2001420.2001424
int main(int x, int y, int z) { // x, y, z are inputs
    int cy = 0, y1 = 0, done = 0;
    while (1) {
        GX: if (x <= 0) {
            done = 1;
            break;
        }
        y1 = y;
        while (1) {
            GY: if (y1 <= 0) break;
            y1--;
            cy = cy + 1;
        }
        GZ: if (z <= 0) break;
        x--;
        z--;
    }
    if (cy == y * 101)
        assert(false);
}

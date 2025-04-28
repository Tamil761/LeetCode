long long coloredCells(int n) {
    int i;
    long long s = 1;
    for(i = 1; i <= n; i++)
        s += 4 * (i - 1);
    return s;
}
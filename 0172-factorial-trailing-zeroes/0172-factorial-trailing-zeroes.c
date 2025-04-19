int trailingZeroes(int n) {
    int i = 5, s = 0;
    while(i <= n){
        s += n / i;
        i *= 5;
    }
    return s;
}
int alternateDigitSum(int n) {
    int num, i, s, r;
    num = n;
    i = 0;
    while(num != 0){
        i++;
        num /= 10;
    }
    s = 0;
    while(n != 0){
        r = n % 10;
        if(i % 2 == 0)
            r -= r * 2;
        s += r;
        n /= 10;
        i--;
    }
    return s;
}
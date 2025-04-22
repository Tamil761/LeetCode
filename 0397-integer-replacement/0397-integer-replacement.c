int integerReplacement(int x) {
    int a, c = 0;
    long n = x;
    while(n != 1){
        if(n % 2 == 0)
            n /= 2;
        else{
            a = (n - 1) / 2;
            if(a == 1 || a % 2 == 0)
                n -= 1;
            else
                n += 1;
        }
        c++;
    }
    return c;
}
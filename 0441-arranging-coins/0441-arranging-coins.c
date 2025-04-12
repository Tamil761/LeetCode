int arrangeCoins(int n) {
    int a = 1, c = 0;
    while(n >= 0){
        n -= a;
        if(n >= 0)
            c++;
        a++;
    }
    return c;
}
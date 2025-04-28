bool isPalindrome(int n) {
    int r, c = n;
    long s = 0;
    if(n < 0 || n % 10 == 0 && n != 0)
        return false;
    while(n != 0){
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }
    if(s == c)
        return true;
    else
        return false;
}
int countSymmetricIntegers(int low, int high) {
    int i, n, j, s1, s2, c, c1 = 0;
    for(i = low; i <= high; i++){
        s1 = 0, s2 = 0, c = 0;
        n = i; 
        while(n != 0){
            c++;
            n /= 10;
        }
        n = i;
        if(c % 2 == 0){
            for(j = 1; j <= c; j++){
                if(j <= c / 2)
                    s1 += n % 10;
                else
                    s2 += n % 10;
                n /= 10;
            }
            if(s1 == s2)
                c1++;
        }
    }
    return c1++;
}
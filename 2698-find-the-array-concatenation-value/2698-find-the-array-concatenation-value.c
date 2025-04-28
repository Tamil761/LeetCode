long long findTheArrayConcVal(int* nums, int n) {
    int l = 0, r = n - 1, c, num;
    long long concat = 0;
    while(l < r){
        c = 0;
        num = nums[r];
        while(num != 0){
            c++;
            num /= 10;
        }
        long long temp = 1;
        for(int i = 0; i < c; i++)
            temp *= 10;
        concat += nums[l] * temp + nums[r];
        l++;
        r--;
    } 
    if (l == r)
        concat += nums[l];
    return concat;
}
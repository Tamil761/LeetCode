int sumOfSquares(int* nums, int n) {
    int i, j, c, s = 0;
    for(i = 1; i <= n; i++){
        if(n % i == 0)
            s += nums[i - 1] * nums[i - 1];
    }
    return s;
}
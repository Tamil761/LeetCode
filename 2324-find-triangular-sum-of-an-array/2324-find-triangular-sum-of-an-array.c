int triangularSum(int* nums, int n) {
    while(n != 0){
        for(int i = 0; i < n - 1; i++)
            nums[i] = (nums[i] + nums[i + 1]) % 10;
        n--;
    }
    return nums[0];
}
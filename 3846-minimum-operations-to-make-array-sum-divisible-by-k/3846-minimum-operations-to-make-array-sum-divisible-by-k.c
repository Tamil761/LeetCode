int minOperations(int* nums, int n, int k) {
    int i, s = 0;
    for(i = 0; i < n; i++)
        s += nums[i];
    return s % k;
}
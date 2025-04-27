int countSubarrays(int* nums, int n) {
    int i, c = 0;
    for(i = 0; i < n - 2; i++)
        if(nums[i] + nums[i + 2] == nums[i + 1] / 2.0)
            c++;
    return c;
}
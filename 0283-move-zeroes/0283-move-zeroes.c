void moveZeroes(int* nums, int n) {
    int i, k = 0;
    for(i = 0; i < n; i++)
        if(nums[i] != 0)
            nums[k++] = nums[i];
    for(i = k; i < n; i++)
        nums[i] = 0;
}
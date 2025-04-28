int removeElement(int* nums, int n, int val) {
    int i, j = 0;
    for(i = 0; i < n; i++)
    {
        if(nums[i] != val)
        {
            nums[j++] = nums[i];
        }
    }
    return j;
}
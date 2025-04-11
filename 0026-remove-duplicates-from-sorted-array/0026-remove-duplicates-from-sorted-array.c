int removeDuplicates(int* nums, int n) {
    int i, j = 0;
    for(i = 0; i < n - 1; i++){
        if(nums[i] != nums[i + 1])
            nums[j++] = nums[i];
    }
    nums[j++] = nums[n - 1]; 
    return j;
}
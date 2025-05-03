int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

bool containsDuplicate(int* nums, int n) {
    qsort(nums, n, sizeof(int), cmp);
    int i, j;
    for(i = 1; i < n; i++)
        if(nums[i] == nums[i - 1])
            return true;
    return false;   
}
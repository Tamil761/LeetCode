bool isMonotonic(int* nums, int n) {
    int i, m, c1 = 1, c2 = 1;
    m = n;
    for(i = 0; i < n - 1; i++){
        if(nums[i] < nums[i + 1])
            c1++;
        else if(nums[i] > nums[i + 1])
            c2++;
        else
            m--;
    }
    if(c1 == m || c2 == m)
        return true;
    return false;
}
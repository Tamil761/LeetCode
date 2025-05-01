int subarraySum(int* nums, int n) {
    int i, j, start, total = 0;
    for(i = 0; i < n; i++){
        start = i - nums[i];
        if(start < 0)
            start = 0;
        for(j = start; j <= i; j++)
            total += nums[j];
    }
    return total;        
}


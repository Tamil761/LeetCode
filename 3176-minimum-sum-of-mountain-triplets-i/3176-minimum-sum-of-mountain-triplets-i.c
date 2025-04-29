int minimumSum(int* nums, int n) {
    int i, j, k, sum, minSum = INT_MAX;
    for(i = 0; i < n - 2; i++)
        for(j = i + 1; j < n - 1; j++)
            if(nums[i] < nums[j])
                for(k = j + 1; k < n; k++)
                    if(nums[k] < nums[j]){
                        sum = nums[i] + nums[j] + nums[k];
                        if(sum < minSum)
                            minSum = sum; 
                    }
    return (minSum == INT_MAX) ? -1 : minSum;
}
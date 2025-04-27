int maximumDifference(int* nums, int n) {
    int i, j, ans = 0, maxDiff = 0;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(nums[i] < nums[j])
                ans = nums[j] - nums[i];
            if(ans > maxDiff)
                maxDiff = ans;
        }
    }
    if(maxDiff == 0)
        return -1;
    return maxDiff;
}
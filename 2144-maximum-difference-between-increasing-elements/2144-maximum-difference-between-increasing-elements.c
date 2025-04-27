int maximumDifference(int* nums, int n) {
    int i, j, ans = -1, maxDiff = -1;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(nums[i] < nums[j])
                ans = nums[j] - nums[i];
            if(ans > maxDiff)
                maxDiff = ans;
        }
    }
    return maxDiff;
}
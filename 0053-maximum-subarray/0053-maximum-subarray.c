// -- Kadane’s Algorithm --

int maxSubArray(int* nums, int n) {
    int i, s = 0, maxSum = INT_MIN;
    for(i = 0; i < n; i++){
        s += nums[i];
        if(s > maxSum)
            maxSum = s;
        if(s < 0)
            s = 0;
    }
    return maxSum;
}
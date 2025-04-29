long long maximumTripletValue(int* nums, int n) {
    int i, j, k;
    long long ans, maxVal = 0;
    for(i = 0; i < n - 2; i++){
        for(j = i + 1; j < n - 1; j++){
            for(k = j + 1; k < n; k++){
                ans = (long long)(nums[i] - nums[j]) * nums[k];
                if(ans > maxVal)
                maxVal = ans;
            }
        }
    }
    return maxVal;
}
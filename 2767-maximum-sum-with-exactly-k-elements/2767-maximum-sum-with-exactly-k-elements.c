int maximizeSum(int* nums, int n, int k) {
    int i, j, c, s;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(nums[i] < nums[j]){
                c = nums[i];
                nums[i] = nums[j];
                nums[j] = c;
            }
        }
    }
    s = 0;
    for(i = 0; i < k; i++){
        s += nums[0];
        nums[0]++;
    }
    return s;
}
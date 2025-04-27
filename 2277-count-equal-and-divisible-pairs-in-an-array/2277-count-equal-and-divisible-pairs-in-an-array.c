int countPairs(int* nums, int n, int k) {
    int i, j, c = 0;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(nums[i] == nums[j] && (i * j) % k == 0)
                c++;
        }
    }
    return c;
}
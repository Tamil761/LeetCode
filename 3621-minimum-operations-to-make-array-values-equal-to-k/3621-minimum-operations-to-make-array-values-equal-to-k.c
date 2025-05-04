int minOperations(int* nums, int n, int k) {
    int i, j, f, c = 0;
    for(i = 0; i < n; i++) 
        if(nums[i] < k)
            return -1;
    for(i = 0; i < n; i++){
        f = 1;
        for(j = 0; j < i; j++)
            if(nums[i] == nums[j]){
                f = 0;
                break;
            }
        if(f == 1)
            if(nums[i] > k)
                c++;
    }    
    return c;
}
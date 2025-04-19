int arraySign(int* nums, int n) {
    int i, c = 0;
    for(i = 0; i < n; i++){
        if(nums[i] == 0)
            return 0;
        if(nums[i] < 0)
            c++;
    }
    if(c % 2 == 0)
        return 1;
    return -1;
}
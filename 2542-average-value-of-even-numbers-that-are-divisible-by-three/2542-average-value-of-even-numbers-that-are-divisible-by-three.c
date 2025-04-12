int averageValue(int* nums, int n) {
    int i, s = 0, c = 0;
    for(i = 0; i < n; i++){
        if(nums[i] % 2 == 0 && nums[i] % 3 == 0){
            s += nums[i];
            c++;
        }
    }
    if(c == 0)
        return 0;
    return s / c;
}
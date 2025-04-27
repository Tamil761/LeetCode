int findFinalValue(int* nums, int n, int original) {
    for(int i = 0; i < n; i++){
        if(nums[i] == original){
            original *= 2;
            i = -1;
        }
    }
    return original;
}
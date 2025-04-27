bool divideArray(int* nums, int n) {
    int i, j, c;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(nums[i] > nums[j]){
                c = nums[i];
                nums[i] = nums[j];
                nums[j] = c;
            }
        }
    }
    for(i = 0; i < n - 1; i = i + 2)
        if(nums[i] != nums[i + 1])
            return false;
    return true;
}
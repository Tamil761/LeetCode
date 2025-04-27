int countTestedDevices(int* nums, int n) {
    int i, j, c = 0;
    for(i = 0; i < n; i++){
        if(nums[i] > 0){
            c++;
            for(j = i + 1; j < n; j++)
                nums[j] -= 1;
        }
    }
    return c; 
}
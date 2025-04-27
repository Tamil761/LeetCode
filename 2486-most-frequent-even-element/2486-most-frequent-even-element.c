int mostFrequentEven(int* nums, int n) {
    int i, j, c, f, maxC = 0, maxE;
    for(i = 0; i < n; i++){
        if(nums[i] % 2 == 0){
            f = 1;
            for(j = 0; j < i; j++)
                if(nums[i] == nums[j]){
                    f = 0;
                    break;
                }
            if(f == 1){
                c = 0;
                for(j = i; j < n; j++)
                    if(nums[i] == nums[j])
                        c++;
                if(c > maxC){
                    maxC = c;
                    maxE = nums[i];
                }
                else if(c == maxC){
                    if(nums[i] < maxE){
                        maxE = nums[i];
                    }
                }
            }
        }
    }
    if(maxC == 0)
        return -1;   
    return maxE;
}
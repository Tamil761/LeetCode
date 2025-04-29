int maxFrequencyElements(int* nums, int n) {
    int i, j, f, c, max = 0, sum = 0;
    for(i = 0; i < n; i++){
        f = 1;
        for(j = 0; j < i; j++){
            if(nums[i] == nums[j]){
                f = 0;
                break;
            }
        }
        if(f == 1){
            c = 0;
            for(j = i; j < n; j++)
                if(nums[i] == nums[j])
                    c++;    
            if(c > max){
                max = c;
                sum = c;
            }
            else if(c == max)
                sum += c;
        }
    }
    return sum;
}
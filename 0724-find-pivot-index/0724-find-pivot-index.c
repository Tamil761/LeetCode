int pivotIndex(int* nums, int n) {
    int i, j, s1 , s2;
    for(i = 0; i < n; i++){
        s1 = 0;
        for(j = 0; j < i; j++)
            s1 += nums[j];
        s2 = 0;
        for(j = i + 1; j < n; j++)
            s2 += nums[j];
        if(s1 == s2)
            return i;
    }
    return -1;
}
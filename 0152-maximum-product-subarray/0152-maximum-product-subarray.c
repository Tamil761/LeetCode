int maxProduct(int* nums, int n) {
    int i, p = 1, maxPro = INT_MIN;
    for(i = 0; i < n; i++){
        p *= nums[i];
        if(p > maxPro)
            maxPro = p;
        if(p == 0)
            p = 1;
    }
    p = 1;
    for(i = n - 1; i >= 0; i--){
        p *= nums[i];
        if(p > maxPro)
            maxPro = p;
        if(p == 0)
            p = 1;
    }
    return maxPro;
}
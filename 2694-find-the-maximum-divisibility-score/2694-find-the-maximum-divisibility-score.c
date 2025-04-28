int maxDivScore(int* nums, int n, int* divisors, int n1) {
    int i, j, c, maxC = 0, ans = divisors[0];
    for(i = 0; i < n; i++)
        if(nums[i] % divisors[0] == 0)
            maxC++;
    for(i = 1; i < n1; i++){
        c = 0;
        for(j = 0; j < n; j++)
            if(nums[j] % divisors[i] == 0)
                c++;
        if(c > maxC){
            maxC = c;
            ans = divisors[i];
        }
        if(c == maxC)
            ans = (divisors[i] < ans) ? divisors[i] : ans;
    }
    return ans;
}
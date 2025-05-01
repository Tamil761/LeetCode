int numberOfPairs(int* nums1, int n, int* nums2, int m, int k) {
    int i, j, c = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(nums1[i] % (nums2[j] * k) == 0)
                c++;
        }
    }
    return c;
}
double findMedianSortedArrays(int* nums1, int m, int* nums2, int n) {
    int i, j, c, mid, k = m + n;
    int a[k];
    for(i = 0; i < m; i++)
        a[i] = nums1[i];
    j = 0;
    for(i = m; i < k; i++)
        a[i] = nums2[j++];
    for(i = 0; i < k - 1; i++){
        for(j = i + 1; j < k; j++){
            if(a[i] > a[j]){
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    mid = k / 2;
    if(k % 2 == 0)
        return (a[mid] + a[mid - 1]) / 2.0;
    else
        return a[mid];
}
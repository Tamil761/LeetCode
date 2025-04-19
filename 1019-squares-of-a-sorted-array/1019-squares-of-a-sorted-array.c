/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int n, int* returnSize) {
    int *a = malloc(n * sizeof(int));
    int i, j, c;
    for(i = 0; i < n; i++)
        a[i] = nums[i] * nums[i];
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    *returnSize = n;
    return a;
}
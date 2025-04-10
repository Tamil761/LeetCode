/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int n, int* returnSize) {
    int *a = malloc(n*sizeof(int));
    int i, s = 0;
    for(i = 0; i < n; i++){
        s += nums[i];
        a[i] = s;
    }
    *returnSize = n;
    return a;
}
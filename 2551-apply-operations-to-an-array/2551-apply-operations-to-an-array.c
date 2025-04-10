/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int n, int* returnSize) {
    int *a  = malloc(n * sizeof(int));
    int i, j, k;
    for(i = 0; i < n - 1; i++){
        if(nums[i] == nums[i + 1]){
            nums[i] *= 2;
            nums[i + 1] = 0;
        }
    }
    k = 0;
    for(i = 0; i < n; i++)
        if(nums[i] != 0)
            a[k++] = nums[i];
    for(i = k; i < n; i++)
        a[i] = 0;
    *returnSize = n;
    return a;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int n, int* returnSize) {
    int *a = malloc(n * sizeof(int));
    int i, j, k;
    j = 0, k = 1;
    for(i = 0; i < n; i++){
        if(nums[i] > 0){
            a[j] = nums[i];
            j += 2;
        }
        else{
            a[k] = nums[i];
            k += 2;
        }
    }
    *returnSize = n; 
    return a;
}
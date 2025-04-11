/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int n, int target, int* returnSize) {
    int *a = malloc(2 * sizeof(int));
    int i, f = 0;
    for(i = 0; i < n; i++){
        if(nums[i] == target){
            f = 1;
            a[0] = i;
            break;
        }
    }
    for(i = n - 1; i >= 0; i--){
        if(nums[i] == target){
            a[1] = i;
            break;
        }
    }
    if(f == 0){
        a[0] = -1;
        a[1] = -1;
    } 
    *returnSize = 2;
    return a;
}
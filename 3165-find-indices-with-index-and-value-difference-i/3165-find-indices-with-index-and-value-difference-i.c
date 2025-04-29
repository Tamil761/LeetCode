/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIndices(int* nums, int n, int indexDifference, int valueDifference, int* returnSize) {
    int *a = (int *)malloc(2 * sizeof(int));
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(abs(i - j) >= indexDifference){
                if(abs(nums[i] - nums[j]) >= valueDifference){
                    a[0] = i;
                    a[1] = j;
                    *returnSize = 2;
                    return a;
                }
            }
        }
    }
    a[0] = -1;
    a[1] = -1;
    *returnSize = 2;
    return a;
}
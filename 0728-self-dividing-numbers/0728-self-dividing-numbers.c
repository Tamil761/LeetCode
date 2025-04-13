/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int *a = malloc(10000000 * sizeof(int));
    int num, r, f, k = 0;
    while(left <= right){
        num = left;
        f = 1;
        while(num != 0){
            r = num % 10;
            if(r == 0){
                f = 0;
                break;
            }
            if(left % r != 0){
                f = 0;
                break;
            }
            num /= 10;
        }
        if(f == 1)
            a[k++] = left;
        left++;
    }
    *returnSize = k;
    return a;
}
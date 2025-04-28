int searchInsert(int* nums, int n, int target) {
    int start = 0, end = n - 1, mid;
    while(start <= end){
        mid = start + (end - start) / 2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] > target)
            end = mid - 1;
        else 
            start = mid + 1;
    }
    return start;
}
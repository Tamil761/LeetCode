int smallestEqual(int* nums, int n) {
    for(int i= 0; i < n; i++)
        if(i % 10 == nums[i])
            return i;
    return -1;
}
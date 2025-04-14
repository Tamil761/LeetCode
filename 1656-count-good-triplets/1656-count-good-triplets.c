int countGoodTriplets(int* arr, int n, int a, int b, int c){
    int i, j, k, c1 = 0;
    for(i = 0; i < n - 2; i++){
        for(j = i + 1; j < n - 1; j++){
            for(k = j + 1; k < n; k++){
                if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                    c1++;
            }
        }
    }
    return c1;
}
bool uniqueOccurrences(int* arr, int n) {
    int *a = malloc(10000 * sizeof(int));
    int i, j, f, c, k = 0;
    for(i = 0; i < n; i++){
        f = 1;
        for(j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                f = 0;
                break;
            }
        }
        if(f == 1){
            c = 0;
            for(j = i + 1; j < n; j++){
                if(arr[i] == arr[j])
                    c++;
            }
            a[k++] = c;
        }
    }
    for(i = 0; i < k - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] == a[j])
                return false;
        }
    }
    return true;
}
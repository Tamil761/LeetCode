int largestAltitude(int* gain, int n) {
    int i, a = 0, s = 0;
    for(i = 0; i < n; i++){
        s += gain[i];
        if(s > a)
            a = s;
    }
    return a;
}
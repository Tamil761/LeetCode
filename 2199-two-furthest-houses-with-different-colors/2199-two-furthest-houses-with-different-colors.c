int maxDistance(int* colors, int n) {
    int i, j, dis = 0, maxDis = 0;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(colors[i] != colors[j])
                dis = abs(i - j);
            if(dis > maxDis)
                maxDis = dis;
        }
    }
    return maxDis;
}
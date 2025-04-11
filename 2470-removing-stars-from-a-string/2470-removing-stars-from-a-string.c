char* removeStars(char* s) {
    char *a = malloc(1000000);
    int i = 0, k = 0;
    while(s[i] != '\0'){
        if(s[i] != '*')
            a[k++] = s[i];
        else
            k--;
        i++;
    }
    a[k] = '\0';
    return a;
}
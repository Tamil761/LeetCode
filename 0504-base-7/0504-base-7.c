char* convertToBase7(int num) {
    int f = 1, r, n = 0, i;
    if (num == 0) {
        char* a = malloc(2);
        a[0] = '0';
        a[1] = '\0';
        return a;
    }
    if (num < 0) {
        f = 0;
        num = -num;
    }
    char temp[20];
    while (num != 0) {
        r = num % 7;
        temp[n++] = r + '0';
        num /= 7;
    }
    char* a = malloc((f ? n : n + 1) + 1);
    i = 0;
    if (!f) a[i++] = '-';
    for (int j = n - 1; j >= 0; j--) {
        a[i++] = temp[j];
    }
    a[i] = '\0';
    return a;
}
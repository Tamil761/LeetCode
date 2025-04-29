#define min(a,b) (a < b ? a : b)
int findMinimumOperations(char* s1, char* s2, char* s3) {
    int i, l1, l2, l3, minLen, l;
    l1 = strlen(s1);
    l2 = strlen(s2);
    l3 = strlen(s3);
    minLen = (min(l1,l2),l3);
    l = 0;
    for(i = 0; i < minLen; i++){
        if(s1[i] == s2[i] && s2[i] == s3[i])
            l++;
        else
            break;
    }
    if(l == 0)
        return -1;
    return (l1 - l) + (l2 - l) + (l3 - l);
}
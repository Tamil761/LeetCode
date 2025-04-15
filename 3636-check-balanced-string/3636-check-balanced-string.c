bool isBalanced(char* s) {
    int i = 0, s1 = 0, s2 = 0;
    while(s[i] != '\0'){
        if(i % 2 == 0)
            s1 += (s[i] - '0');
        else
            s2 += (s[i] - '0');
        i++;
    }
    if(s1 == s2)
        return true;
    return false;
}
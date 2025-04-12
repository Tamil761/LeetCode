int lengthOfLastWord(char* s) {
    int i, f = 0, c = 0;
    i = strlen(s) - 1;
    while(i >= 0){
        if(isalpha(s[i]))
            f = 1;
        if(f == 1){
            if(s[i] == ' ')
                break;
            else
                c++;
        }
        i--;
    }
    return c;
}
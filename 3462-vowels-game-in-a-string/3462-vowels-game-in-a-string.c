bool doesAliceWin(char* s) {
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            return true;
        i++;
    }
    return false;
}
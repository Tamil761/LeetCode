bool doesAliceWin(char* s) {
    int i = 0;
    while(*s != '\0'){
        if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
            return true;
        s++;
    }
    return false;
}
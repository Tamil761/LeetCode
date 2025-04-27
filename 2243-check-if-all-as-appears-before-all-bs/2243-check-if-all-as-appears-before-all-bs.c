bool checkString(char* s) {
    int n, i, j; 
    n = strlen(s);
    for(i = n - 1; i >= 0; i--){
        if(s[i] == 'a'){
            for(j = i - 1; j >= 0; j--){
                if(s[j] == 'b')
                    return false;
            }
            return true;
        }
    }
    return true;
}
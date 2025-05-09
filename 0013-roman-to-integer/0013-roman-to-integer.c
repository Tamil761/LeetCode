int value(char r){
    switch(r){
        case 'I' : return 1;
        case 'V' : return 5;
        case 'X' : return 10;
        case 'L' : return 50;
        case 'C' : return 100;
        case 'D' : return 500;
        case 'M' : return 1000;
        default  : return 1;
    }
}
int romanToInt(char* s) {
    int i = 0, res = 0, s1, s2;
    while(s[i] != '\0'){
        s1 = value(s[i]);
        s2 = value(s[i + 1]);
        if(s1 < s2){
            res += s2 - s1;
            i += 2;
        }
        else{
            res += s1;
            i++;
        }
    }
    return res;
}

int countSeniors(char** details, int n) {
    int i, age, c = 0;
    for(i = 0; i < n; i++){
        age = (details[i][11] - '0') * 10 + (details[i][12] - '0');
        if(age > 60)
            c++;
    }
    return c;
}
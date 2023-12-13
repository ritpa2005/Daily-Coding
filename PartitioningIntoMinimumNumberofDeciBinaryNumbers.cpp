int minPartitions(string n) {
    int m=0;
    for(char c:n){
        if(c>m) m = (int)(c);
    }
    return m-48;
}

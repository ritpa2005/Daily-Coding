string largestGoodInteger(string num) {
    string s= " ";
    int c=1;
    for(int i=2;i<num.length();++i){
        if(num[i]<s[0]) continue;
        if(num[i]==num[i-1] && num[i]==num[i-2]) s = num.substr(i-2,3);
    }
    if(s==" ") return "";
    return s;
}
